#include	<stdlib.h>
#include	<stdio.h>
#include	<string.h>
#include	"ooc_base.h"
#include	"ooc_string.h"

void		*string_ctor(void *_self, va_list *ap)
{
  t_string	*self = (t_string *)_self;
  const char	*tmp = va_arg(*ap, const char *);

  self->data = malloc(strlen(tmp) + 1);
  strcpy(self->data, tmp);
  return (_self);
}

void		*string_dtor(void *_self)
{
  free(((t_string *)_self)->data);
  return (_self);
}

void		string_print(void *_self)
{
  if (((t_string *)_self)->data)
    printf("%s", ((t_string *)_self)->data);
}

static const t_class _String = 
  {
    sizeof(struct s_string),
    &string_ctor,
    &string_dtor
  };

const void *String = &_String;
