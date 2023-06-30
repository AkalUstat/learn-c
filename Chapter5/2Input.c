#include <stdio.h>

main()
{
  int n, number, triangular_number;

  printf("Which triangular number would you like, good sir?\n ");

  scanf("%i", &number);

  triangular_number = 0;

  for (n = 1; n <= number; ++n)
  {
    triangular_number += n;
  }

  printf("Triangular number %i is %i\n", number, triangular_number);
}