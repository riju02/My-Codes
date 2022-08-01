#include <stdio.h>

int insert_item(int LA[], int N, int k, int item)
{
    int j = N;
    while (j >= k - 1)
    {
        LA[j + 1] = LA[j];
        j = j - 1;
    }
    LA[k - 1] = item;

    return 0;
}

int main()
{
    int array[10] = {21, 2, 43, 14, -5, 46, 87, 8};
    int ITEM;
    int size = 8; /*length of the array*/
    int k;        /*postion of the element to be inserted*/
    int i;

    printf("\nEnter the element to be inserted in the array: ");
    scanf("%d", &ITEM);
    printf("\nEnter the postion of the element to be inserted in the array: ");
    scanf("%d", &k);

    if (k <= size + 1 && k > 0)
    {
        insert_item(array, size, k, ITEM);
        size = size + 1;
    }
    else
    {
        printf("Invalid postion entered by the user\n");
    }

    printf("The modified array is: \n");
    for (i = 0; i < (size); i++)
        printf("%d ", array[i]);

    return 0;
}