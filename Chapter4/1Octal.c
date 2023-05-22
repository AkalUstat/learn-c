#include <stdio.h>

main()
{
  int _octal = 050;

  /* Print without leading 0 */
  printf("This is octal without the leading 0: %o\n", _octal);
  /* Print with leading 0 */
  printf("This is octal with the leading 0: %#o\n", _octal);
}