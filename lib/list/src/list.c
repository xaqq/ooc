#include	<stdarg.h>
#include	<stdlib.h>
#include	<string.h>
#include	"ooc_base.h"
#include	"ooc_list.h"

void		*list_ctor(void *_self, va_list *ap)
{
  t_list	*self = (t_list *)_self;
  int		size = va_arg(*ap, int); /* size of data saved in list */

  self->data_size = size;
  self->first = NULL;
  self->last = NULL;
  return (_self);  
}

void		*list_dtor(void *_self)
{
  t_list	*self = (t_list *)_self;
  
  self = self;
  return (_self);
}

void		list_append_real_function(void *_self, void *data)
{
  t_list	*self = (t_list *)_self;
  t_list_item	*item = malloc(sizeof(t_list_item));
  unsigned char	*storage;

  storage = malloc(self->data_size);
  memcpy(storage, *(void **)data, self->data_size);
  item->data = data;
  self->last = item;
}

void		*list_get_last(void *_self)
{
  t_list	*self = (t_list *)_self;
  return ((void *)(self->last->data));
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
