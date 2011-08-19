#include	<stdlib.h>
#include	"base.h"

void		*new(const void *obj, ...)
{
  t_class	*item = (t_class *)obj;
  void		*self;

  self = malloc(item->size);
  self = item->ctor(self, NULL);
  
  obj = obj;  
  return (NULL);
}
