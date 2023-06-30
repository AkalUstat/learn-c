#include <stdio.h>

/* This program takes in a base ten number and converts it into a base of the users choosing, limited upto base 16. See book Page 116-120 for more information. */

main()
{
  char base_digits[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

  /* This suports converting the largest integer to the smallest base (2)*/
  int converted_number[64];

  long int number_to_convert;
  int next_digit, base, index = 0;

  printf("Number to be converted?\n");
  scanf("%ld", &number_to_convert);
  printf("Base?\n");
  scanf("%i", &base);

  do
  {
    /* The next digit of the number is the original number % base */
    converted_number[index] = number_to_convert % base;
    ++index;

    /* To get the next digit, we divide the number by the base*/
    number_to_convert = number_to_convert / base;
  } while (number_to_convert != 0);

  /* Since, by our algorithm, the digits are in reverse order, we must print in the reverse direction */
  printf("\nThe converted number is: ");
  for (index -= 1; index >= 0; --index)
  {
    next_digit = converted_number[index];
    printf("%c", base_digits[next_digit]);
  }

  printf("\n");
}