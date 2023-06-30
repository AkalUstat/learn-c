#include <stdio.h>

/* Declaring variables with */
struct date
{
  int day;
  int month;
  int year;
} today, tomorrow;

/* Initial values to variable*/
struct date
{
  int day;
  int month;
  int year;
} today = {2, 7, 2023};

/* If all variables of a certain type are declared only here, then struct doesn't need a name*/
struct
{
  int day;
  int month;
  int year;
} dates[100];