#include<stdio.h>

int main()
{
	int i,j,n;
	printf("\n Enter The Range Of Pattern-   ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",(char)(64+j));
		}
		printf("\n");
	}
	return 0;
}
