#define		NULL (void *)0
#include	"ooc_base.h"

void		*clone(const void *src)
{
  void		*(*ptr)(const void *);

  ptr = (*(t_class **)src)->clone;
  if (ptr)
    return (ptr(src));
  return (NULL);
}
