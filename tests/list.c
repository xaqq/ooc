#include	<stdio.h>
#include	"ooc_base.h"
#include	"ooc_list.h"
#include	"ooc_itr.h"
#include	"ooc_string.h"

void		test_list_string()
{
  void		*str = new (String, "This is a string !\n"); // String's data must be given
  void		*list = new (List, sizeof(void *));
  list_set_data_is_ptr(list, 1); // we are working with pointers here

  /* test 1 */
  printf("[List string test 1]: An empty list should have no first and last item: ");
  printf("%p, %p\n", list_get_first(list), list_get_last(list));
  
  /* test 2 */
  printf("List string test 2]: After appending an element to the list, this element "
	 "should be the first and the last one:\n");
  list_append(list, str);
  printf("\t\tNew element: %p, first: %p, last: %p\n", str, list_get_first(list),
	 list_get_last(list));

  /* test 3 */
  printf("[List string test 3]: Printing last item, should output \"This is a string !\": ");
  string_print(list_get_last(list));

  delete(str);
  delete(list);
}

void		test_list_int()
{
  void		*list = new(List, sizeof(int));
  void		*itr;
  int		i = 42;

  printf("[List int test 1]: Printing last item, should output \"42\": ");
  list_append(list, i); // Note: you cannot use list_append(list, 5)
  printf("%d\n", *(int *)list_get_last(list));

  list_append_real_function(list, (i = 78, &i));
  i = 1337;
  list_append(list, i);
  for (itr = new(Itr, list); itr_ok(itr); itr_next(itr))
    {
      printf("%d\n", *(int *)itr_get(itr));
    }
  delete(itr);
  delete(list);
}
