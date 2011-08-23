#include	"ooc_base.h"
#include	"ooc_string.h"

int	main()
{
  void	*str;
  void *test;

  str = new(String, "Coucou je suis une chaine :D");
  test = new(String, "BOAP ! :D");

  string_print(str);

  if (typeOf(test) == typeOf(str))
    printf("meme type\n");
  
  if (differ(test, str))
    printf("\ncest pas les memes !\n");
  delete(str);
  return (0);
}
