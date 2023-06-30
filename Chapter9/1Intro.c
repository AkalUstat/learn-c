#include <stdio.h>

struct date
{
  int month;
  int day;
  int year;
};

main()
{
  struct date today, purchase_date;

  today.month = 9;
  today.day = 25;
  today.year = 1993;

  printf("Today's date is %i/%i/%i\n", today.month, today.day, today.year);
}