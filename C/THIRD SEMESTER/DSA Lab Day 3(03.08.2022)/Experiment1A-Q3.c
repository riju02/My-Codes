#include <stdio.h>

void nonzero_elements(int n, int arr[n][n])
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] != 0)
                count++;
        }
    }
    printf("%d\n", count);
}

void above_dia(int n, int arr[n][n])
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (j > i)
                printf("%d\t", arr[i][j]);
            else
                printf("\t", arr[i][j]);
        }
        printf("\n");
    }
}

void below_dia(int n, int arr[n][n])
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (j + i >= n)
                printf("%d\t", arr[i][j]);
            else
                printf("\t", arr[i][j]);
        }
        printf("\n");
    }
}

void product(int n, int arr[n][n])
{
    int p = 1;
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i][i]);
        p *= arr[i][i];
    }
    printf("): %d", p);
}

int main()
{
    int n_035;
    printf("Enter edge size of square matrix:  ");
    scanf("%d", &n_035);
    int m1[n_035][n_035];

    for (int i = 0; i < n_035; i++)
    {
        for (int j = 0; j < n_035; j++)
        {
            printf("Enter values of row(%d) col(%d): ", i, j);
            scanf("%d", &m1[i][j]);
        }
    }

    printf("Original array\n");
    for (int i = 0; i < n_035; i++)
    {
        for (int j = 0; j < n_035; j++)
        {
            printf("%d\t", m1[i][j]);
        }
        printf("\n");
    }

    printf("a)Number of non zero elements is: ");
    nonzero_elements(n_035, m1);

    printf("b)Elements above leading diagonal are:\n");
    above_dia(n_035, m1);

    printf("c)Elements below minor diagonal are:\n");
    below_dia(n_035, m1);

    printf("d) Product of diagonal elements( ");
    product(n_035, m1);
}