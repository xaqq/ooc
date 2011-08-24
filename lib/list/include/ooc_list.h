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
  char		data_is_ptr;
  unsigned int	data_size;
  t_list_item	*first;
  t_list_item	*last;
}		t_list;

void		*list_ctor(void *_self, va_list *ap);
void		*list_dtor(void *_self);
void		list_append_real_function(void *_self, void *data);

/**
 * Returns a pointer to the data stored by the list.
 * /!\ If list_get_data_is_ptr() returns 1, then this function
 * returns the data directly because its more convenient.
 */
void		*list_get_last(void *_self);

/**
 * Returns a pointer to the data stored by the list.
 * /!\ If list_get_data_is_ptr() returns 1, then this function
 * returns the data directly because its more convenient.
 */
void		*list_get_first(void *_self);

/**
 * Tell the list it's storing pointer, that will have
 * an impact when retrieving item from the list.
 * @see list_get_last()
 */
void		list_set_data_is_ptr(void *_self, int);

/**
 * Return 1 if the list is storing pointer, otherwise returns 0
 * @see list_set_data_is_ptr()
 */
int		list_get_data_is_ptr(void *_self);

extern const void *List;

#endif
