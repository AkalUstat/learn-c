#include <stdio.h>

main()
{

  float _normal = 0.3;
  float _si_notation = 2.25E-3;

  printf("This is a 'normal' float: %f\n", _normal);
  printf("This is a declared SI float printed normally: %f\n", _si_notation);
  printf("This is a declared SI float printed in SI notation: %e\n", _si_notation);
  printf("Printf decides how to print this SI number: %g\n", _si_notation);
}
/*
  Double vs. Float:

  Double has 2x digits as a float. By default, the C compiler takes all floating-point as 'double'. To explicitly be float, we must append f/F to the end of a number.
*/