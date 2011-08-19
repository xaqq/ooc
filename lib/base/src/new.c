#include	<stdlib.h>
#include	<assert.h>
#include	"ooc_base.h"

void		*new(const void *obj, ...)
{
  t_class	*type = (t_class *)obj;
  void		*self;
  va_list	ap;

  assert(type);
  self = malloc(type->size);
  *(t_class **)self = type;
  va_start(ap, obj);
  
  self = type->ctor(self, &ap);
  va_end(ap);
  return (self);
}
