#include <stdio.h>

int minimum(int[10]);
int minimum2(int[], int);

main()
{
  int scores[10], i, minimum_score;

  printf("Enter 10 scores\n");

  for (i = 0; i < 10; ++i)
    scanf("%i", &scores[i]);

  minimum_score = minimum2(scores, 10);
  printf("\nMinimum Score is %i\n", minimum_score);
}

int minimum(int values[10])
{
  int minimum_value, i;

  minimum_value = values[0];

  for (i = 1; i < 10; ++i)
    if (values[i] < minimum_value)
      minimum_value = values[i];

  return (minimum_value);
}
int minimum2(int values[], int num_elem)
{

  int minimum_value, i;

  minimum_value = values[0];

  for (i = 1; i < num_elem; ++i)
    if (values[i] < minimum_value)
      minimum_value = values[i];

  return (minimum_value);
}