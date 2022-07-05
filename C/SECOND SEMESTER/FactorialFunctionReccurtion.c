#include<stdio.h>
#include<conio.h>
int factorial(int);
int main()
{
	int n,z;
	printf("\n Enter The Value-   ");
	scanf("%d",&n);
	z=factorial(n);
	printf("\n Factorial of the Number= %d",z);
	return 0;
}
int factorial(int n)
{
  if(n==0)
  return 1;
  else
  return (n*factorial(n-1));
}

