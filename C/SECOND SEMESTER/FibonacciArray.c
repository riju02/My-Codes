#include<stdio.h>

int main()
{
	int a=0,b=1,c=0,n,i,j,k[100];
	printf("\n Enter The Range    ");
	scanf("%d",&n);
	k[0]=a,k[1]=b;
	for(i=2;i<=n+1;i++)
	{
			k[i]=k[i-2]+k[i-1];
			c=k[i];
    }
    printf("\n The Fibonacci Array is- ");
    for(i=0;i<n;i++)
	{
		printf(" %d",k[i]);
	}
	return 0;
}

