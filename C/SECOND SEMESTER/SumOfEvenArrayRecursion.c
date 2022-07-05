#include<stdio.h>

int SumOfEvenElement(int arr[], int n)
{
    static int sum=0;
    int i;
    if(n>0)
    {
        i=n-1;
        if(arr[i]%2==0)
        sum=sum+arr[i];
        SumOfEvenElement(arr,i);
    }
	return sum;
}
int main()
{
    int n,j;
    printf("Enter your array size:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the Array Element:");
    for(j=0;j<n;j++)
    {
        scanf("%d",&arr[j]);
    }
    printf("Sum of even Element is: %d",SumOfEvenElement(arr,n));
}

