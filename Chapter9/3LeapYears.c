#include <stdio.h>
struct date
{
  int day;
  int month;
  int year;
};

int is_leap_year(struct date d);
int number_of_days(struct date d);
struct date date_update(struct date today);

main()
{
  struct date today, tomorrow;
  printf("Enter today's date in mm/dd/yyyy format:\n");
  scanf("%i/%i/%i", &today.month, &today.day, &today.year);

  tomorrow = date_update(today);
  printf("Tomorrow's Date is: %.2i/%.2i/%.2i\n", tomorrow.month, tomorrow.day, tomorrow.year);
}
int days_per_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int number_of_days(struct date d)
{

  if (is_leap_year(d) && d.month == 2)
  {
    return 29;
  }

  return days_per_month[d.month - 1];
}

int is_leap_year(struct date d)
{
  return (d.year % 4 == 0 && d.year % 100 != 0) || (d.year % 400 == 0);
}

struct date date_update(struct date today)
{
  struct date tomorrow;

  if (today.day != number_of_days(today))
  {
    tomorrow.day = today.day + 1;
    tomorrow.month = today.month;
    tomorrow.year = today.year;
  }
  else if (today.month == 12)
  {
    tomorrow.day = 1;
    tomorrow.month = 1;
    tomorrow.year = today.year + 1;
  }
  else
  {
    tomorrow.day = 1;
    tomorrow.month = today.month + 1;
    tomorrow.year = today.year;
  }

  return (tomorrow);
}
