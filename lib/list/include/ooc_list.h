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
  char		data_is_ptr;
  unsigned int	data_size;
  t_list_item	*first;
  t_list_item	*last;
}		t_list;

/**
 * List constructor, as unique parameter it takes the size of the stored data.
 */
void		*list_ctor(void *_self, va_list *ap);
void		*list_dtor(void *_self);

#define		list_push(x, y)		list_push_i((x), list_get_user_data_i((x), (y)))

void		list_push_i(void *_self, t_list_item *i);
t_list_item	*list_get_user_data_i(void *_self, ...);

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


void		*list_get_specific_item(t_list *self, t_list_item *cur);
extern const void *List;

#endif
