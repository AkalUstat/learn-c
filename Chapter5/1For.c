#include <stdio.h>

main()
{

  int n, triangular_number;

  triangular_number = 0;

  for (n = 1; n <= 200; n++)
    triangular_number += n;

  int i, j;
  for (i = 0, j = 1; i < 10; ++i, j += 2)
  {
    printf("We have two variables in this loop: i = %i and j = %i.\n", i, j);
  }

  printf("The 200th Trangular Number is: %i\n", triangular_number);
}
