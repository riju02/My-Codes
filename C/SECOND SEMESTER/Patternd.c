#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,j;
	printf("\n Enter The Value Of Pattern   ");
	scanf("%d",&n);
	for(i=2;i<=n+1;i++)
	{
		for(j=i;j<=n+1;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
