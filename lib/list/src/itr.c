#include	<stdarg.h>
#include	<stdlib.h>
#include	<assert.h>
#include	"ooc_base.h"
#include	"ooc_list.h"
#include	"ooc_itr.h"

void		*itr_ctor(void *_self, va_list *ap)
{
  t_itr	*self = (t_itr *)_self;
  t_list *list = va_arg(*ap, t_list *);

  assert(typeOf(list) == List);
  self->list = list;
  self->cur = list->first;
  self->next = (self->cur ? self->cur->next : NULL);
  return (_self);  
}

void		*itr_dtor(void *_self)
{
  t_itr	*self = (t_itr *)_self;
  
  self = self;
  return (_self);
}

int		itr_ok(void *_self)
{
  t_itr *self = (t_itr *)_self;

  if (self->cur)
    return (1);
  return (0);
}

void		*itr_get_ptr(void *_self)
{
  t_itr *self = (t_itr *)_self;
  
  return (self->cur);
}

void		*itr_get(void *_self)
{
  t_itr *self = (t_itr *)_self;
 
  return (list_get_specific_item(self->list, self->cur));
}

void		itr_next(void *_self)
{
  t_itr *self = (t_itr *)_self;

  self->cur = self->next;
  self->next = self->cur ? self->cur->next : NULL;
}

const struct s_class _Itr =
{
  sizeof(struct s_itr),
  &itr_ctor,
  &itr_dtor,
  NULL, // differ
  NULL, // clone
};

const void *Itr = &_Itr;
