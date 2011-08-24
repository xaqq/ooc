#include	<stdio.h>
#include	"ooc_base.h"
#include	"ooc_string.h"

void		test_string()
{
  void		*str = new (String, "This is a string !\n"); // String's data must be given
  void		*str2 = new (String, "Hey, I'm a string too !\n");
  void		*str3;

  printf("[String's test 1]: Should output: \"This is a string\": ");
  string_print(str);

  printf("[String's test 2]: Should output: \"Strings differ\": ");
  if (differ(str, str2))
    printf("Strings differ\n");
  else
    printf("Test 2 failed !\n");
  
  str3 = clone(str);
  printf("[String's test 2]: Should output: \"Strings are the same\": ");
  if (!differ(str3, str))
    printf("Strings are the same\n");
  else
    printf("Test 3 failed !\n");

  delete(str);
  delete(str2);
  delete(str3);
}
