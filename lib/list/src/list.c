#include	<stdarg.h>
#include	<stdlib.h>
#include	<string.h>
#include	"ooc_base.h"
#include	"ooc_itr.h"

void		*list_ctor(void *_self, va_list *ap)
{
  t_list	*self = (t_list *)_self;
  int		size = va_arg(*ap, int); /* size of data saved in list */

  self->data_size = size;
  self->first = NULL;
  self->last = NULL;
  self->data_is_ptr = 0;
  return (_self);  
}

void		*list_dtor(void *_self)
{
  void		*itr;

  for (itr = new(Itr, _self); itr_ok(itr); itr_next(itr))
    {
      free(((t_list_item *)itr_get_ptr(itr))->data);
      free(itr_get_ptr(itr));
    }
  delete(itr);
  return (_self);
}

void		list_append_real_function(void *_self, void *data)
{
  t_list	*self = (t_list *)_self;
  t_list_item	*item = malloc(sizeof(t_list_item));
  unsigned char	*storage;

  storage = malloc(self->data_size);
  memcpy(storage, data, self->data_size);
  item->data = storage;
  item->next = NULL;
  
  if (!self->first)
    {
      self->first = item;
      self->last = item;
    }
  else
    {
      self->last->next = item;
      self->last = item;
    }
}

void		*list_get_last(void *_self)
{
  t_list	*self = (t_list *)_self;

  if ((void *)(self->last))
    {
      if (self->data_is_ptr) // Returns pointed data.
	return (*(void **)(self->last->data));
      return ((void *)(self->last->data));
    }
  return (NULL);
}

void		*list_get_first(void *_self)
{
  t_list	*self = (t_list *)_self;


  if ((void *)(self->last))
    {
      if (self->data_is_ptr) // Returns pointed data.
	return (*(void **)(self->first->data));
      return ((void *)(self->first->data));
    }
  return (NULL);
}

void		*list_get_specific_item(t_list *self, t_list_item *i)
{
  if (i)
    {
      if (self->data_is_ptr) // Returns pointed data.
	return (*(void **)(i->data));
      return ((void *)(i->data));
    }
  return (NULL);
}

void		list_set_data_is_ptr(void *_self, int val)
{
  t_list	*self = (t_list *)_self;
  
  self->data_is_ptr = val;
}

int		list_get_data_is_ptr(void *_self)
{
  t_list	*self = (t_list *)_self;

  return (self->data_is_ptr);
}

static const t_class _List = 
  {
    sizeof(struct s_list),
    &list_ctor,
    &list_dtor,
    NULL, // differ
    NULL, // clone
  };

const void *List = &_List;
