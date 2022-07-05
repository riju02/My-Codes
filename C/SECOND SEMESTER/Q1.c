#include<stdio.h>

void prime()
{
	int i,j,c;
	printf("\n Prime number between 1 to 100-");
	for(j=1;j<=100;j++)
	{
		c=0;
		for(i=1;i<=j;i++)
		{
			if(j%i==0)
			c++;
		}
		if(c==2)
		{
			printf("\n %d",j);
		}
	}
}
int main()
{
	prime();
}
