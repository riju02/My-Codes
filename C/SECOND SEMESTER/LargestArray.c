#include<stdio.h>

int main()
{
	float a[50],b;
	int n,i;
	printf("\n Enter The Range-   ");
	scanf("%d",&n);
	printf("\n Enter The Value Of Array");
	for(i=0;i<n;i++)
	{
	   printf("\n Enter The Value Of a[%d]-   ",i);
	   scanf(" %f", &a[i]);
	}
	b=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>b)
		{
		  b=a[i];
		}
	}	  
	printf("\n Largest Of Array= %f",b);
	return 0;
}

