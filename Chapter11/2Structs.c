#include <stdio.h>

struct date
{
  int day;
  int month;
  int year;
};

struct int_pointers
{
  int *p1;
  int *p2;
};

main()
{
  struct date todays_date = {12, 3, 2023};

  struct date *date_pointer = &todays_date;

  printf(" Boring member access: %i/%i/%i\n", (*date_pointer).month, (*date_pointer).day, (*date_pointer).year);

  printf("Chad member access: %i/%i/%i\n", date_pointer->month, date_pointer->day, date_pointer->year);

  int i1 = 100, i2;
  struct int_pointers pointers;

  pointers.p1 = &i1;
  pointers.p2 = &i2;

  *pointers.p2 = -97;
}