#include<stdio.h>

int factorial(int n)
{
	if(n==0 || n==1)
	return 1;
	else
	return n*factorial(n-1);
}
int main()
{
	int n;
	printf("\n Enter Your Number- \n");
	scanf("%d", &n);
	printf("\n The Factorial is-%d", factorial(n));
}

