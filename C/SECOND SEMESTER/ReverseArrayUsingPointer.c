#include <stdio.h>
void printArr(int *arr, int size);
int main()
{
    int arr[1000];
    int size,i;
    int *left = arr;  
    int *right;

    printf("Enter size of array: ");
    scanf("%d", &size);

    right = &arr[size - 1];  
    
    for(i=0;i <size;i++)
    {
    	printf("Enter %d elements in array: ",i);
        scanf("%d", left++);
    }
    printf("\nArray before reverse: ");
    printArr(arr, size);
    left = arr;
    while(left < right) 
    {
        *left    ^= *right;
        *right   ^= *left;
        *left    ^= *right;
        left++;
        right--;
    }
    printf("\nArray after reverse: ");
    printArr(arr, size);
    return 0;
}

void printArr(int * arr, int size)
{
    int * arrEnd = (arr + size - 1);
    while(arr <= arrEnd)
    {
        printf("%d, ", *arr);
        arr++;
    }
}
