#include <stdio.h>
struct date
{
  int day;
  int month;
  int year;
};
main()
{
  struct date dates[5] = {{12, 1, 2023}, {1, 5, 1995}, {4, 6, 2013}};
  int i;
  for (i = 0; i < 5; i++)
  {
    printf("This date at index %i is %i/%i/%i.\n", i, dates[i].month, dates[i].day, dates[i].year);
  }
}