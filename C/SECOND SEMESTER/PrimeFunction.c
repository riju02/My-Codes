#include<stdio.h>
int prime(int a)
{
	return a;
}

int main()
{
	int i,n,s=0,k;
	printf("\n Enter The Number    ");
	scanf("%d",&n);
	k=prime(n);
	for(i=1;i<n/2;i++)
	{
		if(n%i==0)
		{
			s=1;
			break;
		}
	}
	if(s==0)
	{
	 printf("\n The Number %d is Prime Number.",n);
	}
	else
	{
	 printf("\n The Number %d is NOT Prime Number.",n);
	}
	return 0;
}
