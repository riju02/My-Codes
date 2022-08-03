#include <stdio.h>
int main()
{
    int a[50],b[50], n_035, i, j, t;
    printf("\n Please Enter The Number Of Elements You Want In The Array: ");
    scanf("%d", &n_035);
    for (i = 0; i < n_035; i++)
    {
        printf("\n Please Enter The Value Of Element %d: ", i);

        scanf("%d", &a[i]);
    }
    for (i = 0; i < n_035 - 1; i++)
    {
        for (j = 0; j < n_035 - i - 1; j++)

        {
            if (a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
    printf("\n Array after implementing bubble sort: ");
    for (i = 0; i < n_035; i++)
    {
        b[i]=a[i];
    }
    int c = b[0], d = b[0];
    printf("\n The Sorted Array is- ");
    for (i = 0; i < n_035; i++)
    {
        printf(" %d",b[i]);
    }
    for (i = 0; i < n_035; i++)
    {
        if (b[i] > c)
        {
            c = b[i];
        }
        if (b[i] < d)
        {
            d = b[i];
        }
    }
    printf("\n The Largest Element is- %d", c);
    printf("\n The Smallest Elemet is- %d", d);
}