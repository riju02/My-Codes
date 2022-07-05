#include<stdio.h>

int main()
{
	int a[50],b=0,i,n;
	printf("\n Enter The Range-   ");
	scanf("%d",&n);
	printf("\n Enter The Value Of Array");
	for(i=0;i<n;i++)
	{
	   printf("\n Enter The Value Of a[%d]-   ",i);
	   scanf("%d",&a[i]);
	}
	printf("\n Value In Array");
	for(i=0;i<n;i++)
	{
		b=b+a[i];
	}
	printf("\n Sum Of Array= %d",b);
	return 0;
}

