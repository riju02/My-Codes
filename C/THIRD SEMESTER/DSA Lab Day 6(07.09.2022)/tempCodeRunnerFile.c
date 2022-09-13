#include <stdio.h>
#include<stdlib.h>

int main()
{
    int n_035;
    printf("\n How many degree of input you want to add in Two Polynomials- ");
    scanf("%d", &n_035);
    int *A, *B, prod[n_035 + 1];
    A = (int *)malloc(n_035 * sizeof(int));
    B = (int *)malloc(n_035 * sizeof(int));

    for (int i = 0; i < n_035 + 1; i++)
    {
        prod[i] = 0;
    }
    
    printf("\n Enter The %d Co-efficient of First Polynomial- ", n_035);
    for (int i = 0; i < n_035; i++)
    {
        scanf("%d", A+i);
    }
    printf("\n Enter The %d Co-efficient of Second Polynomial- ", n_035);
    for (int i = 0; i < n_035; i++)
    {
        scanf("%d", B+i);
    }

    for (int i = 0; i < n_035; i++)
    {
        for (int j = 0; j < n_035; j++)
        {
            prod[i + j] = prod[i + j] + A[i] * B[j];
        }
    }
    printf("\n First Polynomial- ");
    for (int i = n_035-1; i >=0; i--)
    {
        if (i==0)
        {
            printf("%d x^%d", *(A + i), i);
        }
        else
        {
            printf("%d x^%d+", *(A + i), i);
        }
    }
    printf("\n Second Polynomial- ");
    for (int i = n_035 - 1; i >= 0; i--)
    {
        if (i == 0)
        {
            printf("%d x^%d", *(B + i), i);
        }
        else
        {
            printf("%d x^%d+", *(B + i), i);
        }
    }
    printf("\n The product of Two Polynomial is- ");
    for (int i = n_035 - 1; i >= 0; i--)
    {
        if(i==0){
        printf(" %d x^%d ", prod[i], i);
        }else{
            printf(" %d x^%d+ ", prod[i], i);
        }
    }
    return 0;
}
