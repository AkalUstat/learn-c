#include <stdio.h>

/* parens are needed since define perfoms a literal text substition. W/o parents x+1 would not work*/
#define SQUARE(x) (x) * (x)

main()
{
  int x = 5;
  int y = SQUARE(x + 1);

  printf("%i squared is %i\n", x, y);
}