#include<stdio.h>
int find_sum(int n, int *arr)
{
    int s=0,i;
    for(i=0; i<n; i++)
	{
        printf("address of element(%d): %p\n", i, &arr[i]);
        s+=arr[i];
    }
    return s;
}

int main()
{
    int n,i;
    printf("enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    for(i=0; i<n; i++)
	{
        printf("enter value: ");
        scanf(" %d", &arr[i]);
    }
    int sum=find_sum(n, arr);
    printf("sum=%d", sum);
    
    return 0;
}
