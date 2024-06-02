#include <stdio.h>

void main()
{
    int a[2][2] = {{3, 5}, {7, 0}};
    int b[2][2] = {{1, 9}, {3, 2}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Matrix A row: %d, col: %d = %d \n", (i + 1), (j + 1), a[i][j]);
            printf("Matrix B row: %d, col: %d = %d \n", (i + 1), (j + 1), b[i][j]);
        }
    }
}