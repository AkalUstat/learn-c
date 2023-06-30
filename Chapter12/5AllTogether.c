#include <stdio.h>
unsigned int rotate(unsigned int value, int n);

main()
{
  int w1 = 0xa1b5u, w2 = 0xff2u;

  /* Doesn't work because we assume ints to be stored in 16bit*/
  printf("%x\n", rotate(w1, 4));
  printf("%x\n", rotate(w1, -4));
  printf("%x\n", rotate(w2, 8));
  printf("%x\n", rotate(w2, -2));
  printf("%x\n", rotate(w1, 0));
  printf("%x\n", rotate(w1, 20));
}

/* Rotate algorithm: Move bits that would be lost by a shift to the opposite end. */
unsigned int rotate(unsigned int value, int n)
{
  /* We assume 16-bit (hexadecimal) */
  unsigned int result, bits;

  /* scale down the shift count to a defined range */
  if (n > 0)
    n = n % 16;
  else
    n = -(-n % 16);

  if (n == 0)
    result = value;
  else if (n > 0)
  { /* rotate left */
    bits = value >> (16 - n);
    result = value << n | bits;
  }
  else
  {
    n = -n;
    bits = value << (16 - n);
    result = value >> n | bits;
  }

  return (result);
}
