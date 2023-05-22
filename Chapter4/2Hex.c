#include <stdio.h>

main()
{
  int _hex = 0x6A;

  printf("This is hexadecimal without the leading 0x: %x\n", _hex);
  printf("This is hexadecimal with the leading 0x: %#x\n", _hex);
}