#ifndef		__OOC_STRING_H__
#define		__OOC_STRING_H__

typedef struct	s_string
{
  void		*_class;
  char		*_data;
}		t_string;

void		*string_ctor(void *_self, va_list *ap);
void		*string_dtor(void *_self);

extern const void *String;

#endif
