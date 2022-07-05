#include<stdio.h>

int main()
{
	int i,n,s=0;
	printf("\n Enter The Number      ");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
		 s=s+i;
		}
	}
	if(s==n)
	{
	  printf("\n The Number is a Perfect Number.");
	}
	else
	{
	  printf("\n The Number is NOT a Perfect Number.");
	}
	return 0;
}

