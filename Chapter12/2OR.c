#include <stdio.h>

void inclusive()
{
  int word1 = 0431u, word2 = 0152u;
  printf("Inclusive OR: word1 = %o | word2 = %o => %o\n", word1, word2, word1 | word2);

  /*
    Inclusive OR-ing is used to set some specified bits of a word to 1. For example, the following line will set the three rightmost bits of w1 to 1 (regardless of initial value); (2^2 + 2^1 + 2^0 = 7)
  */
  int w1 = 015;
  w1 |= 07;
  printf("Inclusive OR: set rightmost bits of w1 to 1: %o\n", w1);
}

void exclusive()
{
  int word1 = 0536u, word2 = 0266u;
  /* Either bit is 1, but not both*/

  printf("Exclusive OR: word1 = %o ^ word2 %o => %o\n", word1, word2, word1 ^ word2);

  /* Two main uses for XOR:
    1. (Not applicable or useful in C): Set a value to 0 easily by XOR-ing it with itself.
    2. Swap two values without a temporary value (shown below).
  */
  printf("XOR: Swapping word1, %o, with word2, %o. Result: ", word1, word2);
  word1 ^= word2;
  word2 ^= word1;
  word1 ^= word2;
  printf("XOR: word1 = %o and word2 = %o\n", word1, word2);
}

main()
{
  inclusive();
  exclusive();
}