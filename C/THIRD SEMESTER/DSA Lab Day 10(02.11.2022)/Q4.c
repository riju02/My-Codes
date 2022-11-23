#include <stdio.h>
int binarySearch(int arr[], int l, int r, int search)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;
        if (arr[mid] == search)
            return mid;
        if (arr[mid] > search)
            return binarySearch(arr, l, mid - 1, search);
        return binarySearch(arr, mid + 1, r, search);
    }
    return -1;
}

int main(void)
{
    int n, search, i;
    printf(" Enter the size of array- ");
    scanf("%d", &n);
    int arr[n];
    printf(" Enter elements: \n ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf(" Enter the element to be searched- ");
    scanf("%d", &search);
    int result = binarySearch(arr, 0, n - 1, search);
    if (result == -1)
    {
        printf(" Element is not present in array");
    }
    else
    {
        printf(" Element is present at index %d", result);
    }
    return 0;
}
