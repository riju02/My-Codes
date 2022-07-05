#include<stdio.h>

int main()
{
	int a[50],b=0,c=0,i,n;
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
		if(a[i]%2==0)
		{
		  c=c+a[i];
		  printf("\n Even Number= %d",a[i]);
		}
	}
	return 0;
}

