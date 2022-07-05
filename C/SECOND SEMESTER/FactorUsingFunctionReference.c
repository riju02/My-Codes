#include<stdio.h>

void fac(int *);
int main()
{
	int i,n;
	printf("\n Enter The Number- ");
	scanf("%d",&n);
	fac(&n);	
}
void fac(int *n)
{
	int i,s=1;
	printf("\n The Factors are-");
	for(i=1;i<=*n;i++)
	{
		if(*n%i==0)
		{
	     printf(" %d",i);
		 s=s*i;
		}
	}
	printf("\n The Multiplication of Factors- %d",s);
}

