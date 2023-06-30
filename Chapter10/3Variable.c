/* Basically, place a null character at the end for variable lengths */
#include <stdio.h>
void concat(char result[], char str1[], char str2[]);

main()
{
  char word[] = {'H', 'e', 'l', 'l', 'o', '!', '\0'};
  /* Can also be initialized with */
  char word2[] = {"Hello!\n"};
  char result[15];
  printf("%s %s", word, word2);
  concat(result, word, word2);
  printf("Concated is: %s", result);
}

void concat(char result[], char str1[], char str2[])
{
  int i, j;

  for (i = 0; str1[i] != '\0'; i++)
  {
    result[i] = str1[i];
  }

  for (j = 0; str2[j] != '\0'; j++)
  {
    result[i + j] = str2[j];
  }
  result[i + j] = '\0';
}