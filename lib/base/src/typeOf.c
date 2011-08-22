#include	"ooc_base.h"

void		*typeOf(const void *obj)
{
  return (*(t_class **)obj);
}
