#include <stdio.h>

/*
& Bitwise AND
| Bitwise Inclusive OR
^ Bitwise OR
~ One's Complement
<< Left Shift
>> Right Shift
*/

main()
{
  int w1 = 25, w2 = 77, w3;
  w3 = w1 & w2;
  /* should be 9 */
  printf("The Bitwise AND of w1 (%i) and w2 (%i) is w3 (%i)\n", w1, w2, w3);

  /* Bitwise AND is frequently used for "masking operations," where we set certain bits of data to 0.
  For example, in the following line, w1 & 3 means that all other bits than the rightmost two (2^1 and 2^ 0 = 3) to 0.
  */
  w1 = 15;
  w3 = w1 & 3;
  printf("Masking w1, %i, results in w3, %i\n", w1, w3);

  /* Further example of masking with octal numbers.*/
  /* 0 prefix means octal, and u suffix means unsigned.*/
  int word1 = 077u, word2 = 0150u, word3 = 0210u;

  printf("%o ", word1 & word2);
  printf("%o ", word1 & word1);
  printf("%o ", word1 & word2 & word3);
  printf("%o\n", word1 & 1);
}
