#include<stdio.h>

    int main()
{
    int A[2];
    int B[2];
    int prod[3];
    int i, j;

    for (i = 0; i < 2; i++)
    {
        A[i] = B[i] = 0;
    }

    for (i = 0; i < 3; i++)
    {
        prod[i] = 0;
    }

    A[0] = 4;
    A[1] = 5;
    B[0] = -14;
    B[1] = 10;

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            prod[i + j] = prod[i + j] + A[i] * B[j];
        }
    }
    for (i = 0; i < 3; i++)
    {
        printf("%d x^%d+ ", prod[i], i);
    }
    return 0;
}