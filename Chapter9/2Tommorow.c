#include <stdio.h>
struct date
{
  int day;
  int month;
  int year;
};

int days_per_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
main()
{
  struct date today;
  struct date tomorrow;
  printf("Please enter today's date in mm/dd/yyyy format\n");
  scanf("%i/%i/%i", &today.month, &today.day, &today.year);

  /* We have two edge cases: last day of month and last day of year*/

  /* December 31 */
  if (today.day == 31 && today.month == 12)
  {
    tomorrow.day = 1;
    tomorrow.month = 1;
    tomorrow.year = today.year + 1;
  }
  else if (today.day == days_per_month[today.month - 1])
  {
    tomorrow.day = 1;
    tomorrow.month = today.month + 1;
    tomorrow.year = today.year;
  }
  else
  {
    tomorrow.day = today.day + 1;
    tomorrow.month = today.month;
    tomorrow.year = today.year;
  }

  printf("Tomorrow's Date is: %i/%i/%i\n", tomorrow.month, tomorrow.day, tomorrow.year);
}

/* Textbook Solution Went About IF Statements differently:

  if (day != last day of month)
  else if ( month == 12) by virtue of last condition, last day of month is implied
  else by virtue of previous conditions, must be last day of any month other than december
*/