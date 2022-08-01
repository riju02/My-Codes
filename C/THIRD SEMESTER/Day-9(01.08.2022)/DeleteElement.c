#include <stdio.h>

int delete_item(int LA[], int N, int k)
{
    int j;

    for (j = k - 1; j < N - 1; j++)
    {
        LA[j] = LA[j + 1];
    }

    return 0;
}

int main()
{
    int array[10] = {21, 2, 43, 14, -5, 46, 87, 8};
    int size = 8; /*length of the array*/
    int k;        /*postion of the element to be inserted*/
    int i;

    printf("\nEnter the postion of the element to be deleted from the array: ");
    scanf("%d", &k);
    if (k <= size && k > 0)
    {
        delete_item(array, size, k);
        size = size - 1;
    }
    else
    {
        printf("Invalid postion inserted\n");
    }
    printf("The modified array is: \n");
    for (i = 0; i < (size); i++)
        printf("%d ", array[i]);

    return 0;
}