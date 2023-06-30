#include <stdio.h>

void left()
{

  printf("LEFTSHIFT ______ ");
  /* Literally shift the values to the left. Bits shifted out of the MSB are lost and the LSB is 0.*/
  int w1 = 3;
  printf("Beginning: w1 = %i, ", w1);
  w1 <<= 1;
  printf("End: w1 = %i\n", w1);

  /* The overal effect of leftshift is that the shifted value is multiplied by 2. */
}

void right()
{

  printf("RIGHTSHIFT ______ ");
  /* Move 1 to the right; MSB is 0, LSB is lost.
    Some machines differ on what will be shifted right for a signed number
    - If sign = 0, it will always be shifted over.
    - If sign = 1, machines will either:
        a. Arithmetic right shift: move the 1 over.
        b. Logical right shift: will keep the 1, move over a 0.
  */

  int w1 = 0155667u;
  printf("Beginning: w1 = %o, ", w1);
  w1 >>= 1;
  printf("End: w1 = %o\n, ", w1);
}
main()
{
  left();
  right();
}