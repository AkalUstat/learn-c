#include <stdio.h>

main()
{
  int count = 10, x;
  int *int_pointer; /* this * means we are setting up a pointer t*/

  int_pointer = &count; /* The & gives us the address of count*/
  x = *int_pointer;     /* Here, the * means that give us the value from a pointer (indirection operator)*/

  printf("count = %i, x = %i\n", count, x);
}