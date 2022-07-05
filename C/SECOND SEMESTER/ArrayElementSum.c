#include<stdio.h>

int main()
{
	int n,a[50],b[50],c[50],i,j,k;
	printf("\n Enter Value Of Range-   ");
	scanf("%d",&n);
	printf("\n Enter The Elements Of First Array- ");
	for(i=0;i<n;i++)
	{
		printf("\n Enter The Value Of a[%d]    ",i);
		scanf("%d",&a[i]);
	}
	printf("\n Enter The Elements Of Second Array- ");
	for(i=0;i<n;i++)
	{
		printf("\n Enter The Value Of b[%d]    ",i);
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)
	{
		c[i]=a[i]+b[i];
	}
	printf("\n Sum Of Elements Of Two Array- ");
	for(i=0;i<n;i++)
	{
		printf("\n c[%d]- %d",i,c[i]);
	}	
	
	return 0;
}
