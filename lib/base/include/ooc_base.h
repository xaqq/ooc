#ifndef		__OOC_BASE_H__
#define		__OOC_BASE_H__

#include	<stdarg.h>

typedef struct	s_class
{
  int		size;
  void		*(*ctor)(void *_self, va_list *ap);
  void		*(*dtor)(void *_self);
  int		(*differ)(const void *_self, const void *obj);
}		t_class;

void		*new(const void *obj, ...);
void		delete(void *obj);

#endif
