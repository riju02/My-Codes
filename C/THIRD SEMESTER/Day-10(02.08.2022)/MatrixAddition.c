#include<stdio.h>
#include <stdlib.h>

    int main()
{
    int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int B[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int C[3][3];
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            C[i][j] = 0;
        }
        printf("\n");
    }
    printf("\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
        printf("\n");
    }
    printf("\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}