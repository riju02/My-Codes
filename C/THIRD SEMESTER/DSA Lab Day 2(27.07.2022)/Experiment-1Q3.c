//WAP to search an element in dynamic array of n elements

#include <stdio.h>
#include<stdlib.h>

int main()
{
    int i, n_035;
    char *a, ele;
    printf("\n Enter size of the charecter array : ");
    scanf("%d", &n_035);
    a = (int *)malloc(n_035 * sizeof(int));
    for (i = 0; i < n_035; i++)
    {
        printf("\n Enter The Value Of a[%d]    ", i);
        scanf(" %c", a+i);
    }
    printf("\n Enter the element you want to find: ");
    scanf(" %c", &ele);
    for (i = 0; i < n_035; i++)
    {
        if (*(a+i) == ele)
        {
            printf("\n The %c element found ", ele);
            return 0;
        }
    }
    printf("\n The %c element  not  found", ele);
    return 0;
}
