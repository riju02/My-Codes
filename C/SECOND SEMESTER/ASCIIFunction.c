#include<stdio.h>

int ASCII(int a)
{
	return a;
}
int main()
{
	char b;
	int c;
	printf("\n Enter The Character-  ");
	scanf(" %c", &b);
	c=ASCII(b);
	printf("\n The ASCII value of %c is- %d",b,b);
	return 0;
}
