#include<stdio.h>
void bub_sort(int, int*);
int main()
{
	int i;
    printf("enter number of elements: ");
    int n;
    scanf("%d", &n);
    int arr[n];

    for(i=0; i<n; i++)
	{
        printf("enter element: ");
        scanf(" %d", &arr[i]);
    }

    bub_sort(n, arr);

    printf("sorted array: ");
    for(i=0; i<n; i++)
        printf("%d ", arr[i]);
}

void bub_sort(int n, int *arr)
{
	int i,j;
    for(i=0; i<n; i++)
	{
        for(j=0;j<n-1; j++)
		{
            if(arr[j]>arr[j+1])
			{
                int t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
}
