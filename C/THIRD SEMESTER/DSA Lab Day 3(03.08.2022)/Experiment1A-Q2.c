#include <stdio.h>

int main()
{
    int n_035, i, a[100], search, flag;
    printf("\n Enter The Range Of The Array- ");
    scanf("%d", &n_035);
    for (i = 0; i < n_035; i++)
    {
        printf("\n Enter Position %d Element- ", i);
        scanf("%d", &a[i]);
    }
    printf("\n The Array is- ");
    for (i = 0; i < n_035; i++)
    {
        printf("%d ", a[i]);
    }
    i = 0;
    printf("\n Enter The Element you want to search? \n");
    scanf(" %d", &search);
    while (i < n_035)
    {
        if (a[i] == search)
        {
            flag = 1;
        }
        i++;
    }
    if (flag == 1)
    {
        printf("\n The Element '%d' is found.",search);
    }
    else
    {
        printf("\n The Element '%d' is not found.", search);
    }
}