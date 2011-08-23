#include	"ooc_base.h"

int		differ(const void *obj1, const void *obj2)
{
  if (typeOf(obj1) != typeOf(obj2))
    return (1);
  
  return ((*(t_class **)obj1)->differ(obj1, obj2));
}
