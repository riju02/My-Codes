#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,j;
	printf("\n Enter The Value Of Pattern   ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=n;j<=i;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}

