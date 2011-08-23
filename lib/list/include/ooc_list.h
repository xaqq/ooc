#ifndef		__OOC_LIST_H__
#define		__OOC_LIST_H__

typedef struct		s_list_item
{
  unsigned char		*data;
  struct s_list_item	*next;
}			t_list_item;

typedef struct	s_list
{
  void		*_class;
  t_list_item	*first;
  t_list_item	*cur;  
}		t_list;

void		*list_ctor(void *_self, va_list *ap);
void		*list_dtor(void *_self);

extern const void *List;

#endif
