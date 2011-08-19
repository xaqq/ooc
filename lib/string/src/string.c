#include	<stdio.h>
#include	"base.h"
#include	"string.h"

void		*string_ctor(void *_self, va_list *ap)
{
  t_string	*self = (t_string *)_self;
  
  ap = ap;
  self = self;
  printf("String ctor\n");
  return (_self);
}

void		*string_dtor(void *_self)
{
  return (_self);
}

static const t_class _String = 
  {
    sizeof(struct s_string),
    &string_ctor,
    &string_dtor
  };

const void *String = &_String;
