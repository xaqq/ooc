#ifndef		__OOC_ITR_H__
#define		__OOC_ITR_H__

#include	"ooc_list.h"

typedef struct	s_itr
{
  void		*_class;
  t_list	*list;
  t_list_item	*cur;
  t_list_item	*next;
}		t_itr;

/**
 * Iterator's constructor, it takes a pointer to the list it'll
 * iterator over.
 */
void		*itr_ctor(void *_self, va_list *ap);
void		*itr_dtor(void *_self);

/**
 * Returns a pointer to the data stored in the list, or the data itself
 * if list_get_data_is_ptr() returns 1; It internally calls
 * list_get_specific_item()
 */
void		*itr_get(void *_self);

/**
 * Returns a pointer on the current t_list_item. It is used in list's destructor
 * @return t_list_item*
 */
void		*itr_get_ptr(void *_self);

/**
 * Returns 0 or 1 based on wether or not the we've reach the end of the list
 * 
 */
int		itr_ok(void *_self);

/**
 * Go to the next item !
 */
void		itr_next(void *_self);

extern const void	*Itr;
#endif
