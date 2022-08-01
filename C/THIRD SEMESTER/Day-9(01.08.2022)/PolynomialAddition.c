#include<stdio.h>

    int main()
{
    int A[6];
    int B[6];
    int C[6];
    int i;
    for (i = 0; i < 6; i++)
    {
        A[i] = B[i] = C[i] = 0;
    }

    A[1] = 4;
    A[2] = 5;
    A[5] = -7;
    B[0] = -14;
    B[1] = 10;
    B[2] = 6;
    B[3] = 5;
    B[4] = 3;

    for (i = 0; i < 6; i++)
    {
        C[i] = A[i] + B[i];
        printf("%d\n", C[i]);
    }

    return 0;
}