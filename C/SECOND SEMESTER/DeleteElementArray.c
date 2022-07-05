#include<stdio.h>

int main()
{
	int n,a[50],i,j,num;
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
		printf("\n a[%d]-   %d",i,a[i]);
	}
	printf("\n Enter The  Position What You Want To Delete-   ");
	scanf("%d",&j);
	if(j>=n+1)
	{
		printf("\n Deletation is not Possible");
	}
	else
	{
		for(i=j-1;i<n-1;i++)
			{
			  a[i]=a[i+1];
			}
	}
	printf("\n Resultant Array is-   ");
	for(i=0;i<n-1;i++)
	{
		printf("\n a[%d]-   %d",i,a[i]);
	}
	return 0;
}

