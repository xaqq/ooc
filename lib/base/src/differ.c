#include	"ooc_base.h"

int		differ(const void *obj1, const void *obj2)
{
  int		(*ptr)(const void *, const void *);

  if (typeOf(obj1) != typeOf(obj2))
    return (-1);
  
  ptr = (*(t_class **)obj1)->differ;
  if (ptr)
    return (ptr(obj1, obj2));
  return (-1);
}
