//WAP to reverse the contents of a dynamic array of n elements
#include <stdio.h>
#include<stdlib.h>
int main()
{
    int n_035;
    printf("\n Enter Value Of Range-   ");
    scanf("%d", &n_035);
    int *a,*b;
    a=(int*)malloc(n_035*sizeof(int));
    b = (int *)malloc(n_035 * sizeof(int));
    int i,j=0;
    printf("\n Enter Value of An Array");
    for (i = 0; i < n_035; i++)
    {
        printf("\n Enter The Value Of a[%d]    ", i);
        scanf("%d",a+i);
    }
    for (i = 0; i < n_035; i++)
    {
        printf("%d  ", *(a+i));
    }
    for (i = n_035 - 1; i >= 0; i--)
    {
        *(b+j)=*(a+i);
        j++;
    }
    printf("\n The Reverse Array is- ");
    for(j=0;j<n_035;j++)
 {
        printf("%d",*(b+j));
    }
    return 0;
}
