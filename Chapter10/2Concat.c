#include <stdio.h>

void concat(char result[], char str1[], int n1, char str2[], int n2);
main()
{
}

void concat(char result[], char str1[], int n1, char str2[], int n2)
{
  int i, j;
  /* copy str1 to result */
  for (i = 0; i < n1; i++)
  {
    result[i] = str1[i];
  }
  /* copy str2 to result */
  for (j = 0; j < n2; j++)
  {
    result[n1 + j] = str2[j];
  }
}