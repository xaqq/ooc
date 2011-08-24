#include	"ooc_base.h"
#include	"ooc_string.h"
#include	"ooc_list.h"


void		toto_test(void *list)
{
  void		*str;

  str = *(void **)list_get_last(list);
  puts("toto_test");
  string_print(str);
  puts("end of toto_test");
}

int	main()
{
  void	*str;
  void *test;
  void	*list;

  str = new(String, "Coucou je suis une chaine :D");
  test = new(String, "BOAP ! :D");

  printf("%i\n", sizeof(void *));
  list = new(List, sizeof(void *));

  printf("String : %p\n", test);
  list_append(list, test);
  toto_test(list);

  string_print(str);


  
  if (typeOf(test) == typeOf(str))
    printf("meme type\n");
  
  if (differ(test, str))
    printf("\ncest pas les memes !\n");
  delete(str);
  return (0);
}
