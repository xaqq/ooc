#ifndef		__OOC_STRING_H__
#define		__OOC_STRING_H__

typedef struct	s_string
{
  void		*_class;
  char		*data;
}		t_string;

void		*string_ctor(void *_self, va_list *ap);
void		*string_dtor(void *_self);
void		string_print(const void *_self);
int		string_differ(const void *_self, const void *obj);

extern const void *String;

#endif
