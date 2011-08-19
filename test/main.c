#include	"ooc_base.h"
#include	"ooc_string.h"

int	main()
{
  void	*str;

  str = new(String, "Coucou je suis une chaine :D");
  string_print(str);
  delete(str);

  return (0);
}
