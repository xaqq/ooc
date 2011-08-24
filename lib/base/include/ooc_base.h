#ifndef		__OOC_BASE_H__
#define		__OOC_BASE_H__

#include	<stdarg.h>

typedef struct	s_class
{
  int		size;
  void		*(*ctor)(void *_self, va_list *ap);
  void		*(*dtor)(void *_self);
  int		(*differ)(const void *_self, const void *obj);
  void		*(*clone)(const void *_self);
}		t_class;

void		*new(const void *obj, ...);
void		delete(void *obj);
void		*typeOf(const void *obj);
void		*clone(const void *src);

/**
 * Check if the two differ by calling obj1 differ's method.
 * If the two arent of the same type, differ returns -1.
 * If no differ function is found, differ returns -1.
 * @return int
 */
int		differ(const void *obj1, const void *obj2);

#endif
