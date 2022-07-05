#include<stdio.h>

int main()
{
	int a,b,c;
	printf("\n All ASCII Values-       ");
	printf("\n \n Upper Case ASCII Values- ");
	for(a=65;a<=90;a++)
	{
		printf("\n %c's ASCII Value is- %d",a,a);
	}
	printf("\n \n Lower Case ASCII Values- ");
	for(b=97;b<=122;b++)
	{
		printf("\n %c's ASCII Value is- %d",b,b);
	}
	printf("\n \n Digit ASCII Values- ");
	for(c=48;c<=57;c++)
	{
		printf("\n %c's ASCII Value is- %d",c,c);
	}
	return 0;
}

