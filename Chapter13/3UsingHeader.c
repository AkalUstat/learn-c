#include <stdio.h>
#include "ExampleHeader.h"

main()
{
  unsigned int inches = 39;
  unsigned int centi = 40;

  printf("%i inches is %f centimeters.\n", inches, inches * CENTIMETERS_PER_INCH);
  printf("%i centimeters is %f inches.\n", centi, centi * INCHES_PER_CENTIMETER);
}