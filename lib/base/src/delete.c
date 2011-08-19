#include	<stdlib.h>
#include	<assert.h>
#include	"ooc_base.h"

void		delete(void *obj)
{
  t_class	*item = *(t_class **)obj;

  assert(item);
  assert(item->dtor);
  free(item->dtor(obj));
}
