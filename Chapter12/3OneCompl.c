#include <stdio.h>

main()
{
  /* Swaps/Flips the bit of the operand.*/

  int b1 = 0;
  b1 = ~b1;
  printf("OC: b1 = 0 becomes b1 = %d\n", b1);

  int w1 = 50060;
  w1 &= ~1;
  printf("OC: We set w1 = 50060 and with w1 &= ~1, w1 becomes %d\n", w1);
}