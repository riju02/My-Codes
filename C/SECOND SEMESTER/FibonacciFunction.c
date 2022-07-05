#include<stdio.h>

int fibonacci(int n)
{
	int a=0,b=1,c,i=0;
	printf("\n The Fibonacci Series-  ");
	for(i=0;i<n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf(" %d");
	}
}
int main()
{
	int z,l;
	printf("\n Enter The Range Of The Series- ");
	scanf("%d", &z);
	l=fibonacci(z);
	return 0;
}
