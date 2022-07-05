#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,n,a;
	printf("\n Enter the Range of Pattern- ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		a=i%2;
		for(j=0;j<i;j++)
		{
			printf("%d",a);
			a^=1;
		}
		printf("\n");
    }
	return 0;
}
