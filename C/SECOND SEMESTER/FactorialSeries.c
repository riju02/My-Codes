#include<stdio.h>
#include<conio.h>
int main()
{
	int c=1,n,i;
	printf("\n Enter The Range-    ");
	scanf("%d",&n);
	printf("\n The Factorial Series is-   \n");
	for(i=1;i<=n;i++)
	{
		c=c*i;
		printf(" %d",c);
	}
	return 0;
}

