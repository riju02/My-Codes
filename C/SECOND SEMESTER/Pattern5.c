#include<stdio.h>

int main()
{
	int n,i,j;
	printf("\n Enter The Value Of Pattern   ");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=i;j>=1;j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	return 0;
}

