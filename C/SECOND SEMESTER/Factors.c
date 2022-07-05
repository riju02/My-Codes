#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n;
	printf("\n Enter The Number      ");
	scanf("%d",&n);
	printf("\n The Factors are-");
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
		 printf(" %d",i);
		}
	}
	return 0;
}

