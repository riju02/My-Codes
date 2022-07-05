#include<stdio.h>

int main()
{
	int b=0,c=0,i,n;
	char a[50];
	printf("\n Enter The Range-   ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	   printf("\n Enter The Charecter of Your Name in Position a[%d]-   ",i);
	   scanf(" %c",&a[i]);
	}
	printf("\n Your Name is-");
	for(i=0;i<n;i++)
	{
		printf("%c",a[i]);
	}
	return 0;
}

