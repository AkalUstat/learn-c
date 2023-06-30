#include <stdio.h>

void calculate_triangular_number(int n)
{
  /* auto means local */
  auto int i, triangular_number = 0;

  for (i = 1; i <= n; ++i)
    triangular_number += i;

  printf("Trangular number %i is %i\n", n, triangular_number);
}

main()
{
  calculate_triangular_number(10);
  calculate_triangular_number(20);
  calculate_triangular_number(50);
}