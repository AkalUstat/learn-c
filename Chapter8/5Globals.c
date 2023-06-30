#include <stdio.h>
int converted_number[64];
long int number_to_convert;
int base;
int index = 0;

void get_number_and_base(void), convert_number(void), display_converted_number(void);

main()
{
  get_number_and_base();
  convert_number();
  display_converted_number();
}

void get_number_and_base(void)
{
  int base_input = -1;

  printf("Please enter the number you would like to convert:\n");
  scanf("%li", &number_to_convert);

  while (base_input == -1)
  {
    printf("Please enter the base to convert to; Bases between 2 and 16.\n");
    scanf("%i", &base_input);

    if (base_input < 2 || base_input > 16)
      base_input = -1;
  }

  base = base_input;
}

void convert_number(void)
{
  do
  {
    converted_number[index] = number_to_convert % base;
    ++index;
    number_to_convert /= base;
  } while (number_to_convert != 0);
}

void display_converted_number(void)
{
  char base_digits[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

  int next_digit;

  printf("Converted number = ");

  for (index -= 1; index >= 0; --index)
  {
    next_digit = converted_number[index];
    printf("%c", base_digits[next_digit]);
  }
  printf("\n");
}