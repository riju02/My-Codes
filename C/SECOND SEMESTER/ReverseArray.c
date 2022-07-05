#include<stdio.h>

int main()
{
		int n,a[20],i;
		printf("\n Enter Value Of Range-   ");
		scanf("%d",&n);
		printf("\n Enter Value of An Array");
		for(i=0;i<n;i++)
		{
			printf("\n Enter The Value Of a[%d]    ",i);
			scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++)
		{
			printf("%d  ",a[i]);
		}
		printf("\n The Reverse Array is   ");
		for(i=n-1;i>=0;i--)
		{
			printf("%d  ",a[i]);
		}
		return 0;
}

