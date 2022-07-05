#include<stdio.h>

int search(int sr, int* arr)
{
	int i;
    for(i=0; i<5; i++)
	{
        if(arr[i]==sr)
            return 1;
    }
    return 0;
}

int main()
{
    int arr[5],i;
    printf("enter 5 elements: \n");
    for(i=0; i<5; i++)
        scanf(" %d", &arr[i]);
    printf("enter element to be searched: ");
    int sr;
    scanf("%d", &sr);
    int flag=search(sr, arr);
    if(flag)
        printf("found");
    else    
        printf("not found");
    
    return 0;     
}
