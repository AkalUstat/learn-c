#include <stdio.h>

void scalar_multiply(int[3][5], int);

void display_matrix(int[3][5]);

main()
{
  int matrix[][5] = {
      {7, 16, 55, 13, 12},
      {12, 10, 52, 0, 7},
      {-2, 1, 2, 4, 9}};

  printf("Original Matrix:\n");
  display_matrix(matrix);

  scalar_multiply(matrix, 2);

  printf("\nMultiplied by 2:\n");
  display_matrix(matrix);

  scalar_multiply(matrix, -1);

  printf("\nMultiplied by -1:\n");
  display_matrix(matrix);
}

void scalar_multiply(int matrix[3][5], int scalar)
{
  int row, col;

  for (row = 0; row < 3; ++row)
    for (col = 0; col < 5; ++col)
      matrix[row][col] *= scalar;
}

void display_matrix(int matrix[3][5])
{
  int row, col;

  for (row = 0; row < 3; ++row)
  {
    for (col = 0; col < 5; ++col)
      printf("%5i", matrix[row][col]);
    printf("\n");
  }
}