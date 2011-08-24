#ifndef		__OOC_LIST_H__
#define		__OOC_LIST_H__

#define		list_append(x, y)	list_append_real_function((x), ((void *)&(y)));

typedef struct		s_list_item
{
  unsigned char		*data;
  struct s_list_item	*next;
}			t_list_item;

typedef struct	s_list
{
  void		*_class;
  int		data_size;
  t_list_item	*first;
  t_list_item	*last;
}		t_list;

void		*list_ctor(void *_self, va_list *ap);
void		*list_dtor(void *_self);
void		list_append_real_function(void *_self, void *data);
void		*list_get_last(void *_self);
extern const void *List;

#endif
