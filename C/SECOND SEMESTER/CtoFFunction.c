#include<stdio.h>

int fer(float a)
{
	float c,i=1;
	c=(9*a)/5+32;
	return c;
}
int main()
{
	float p,d;
	printf("\n Enter The Celcius Value- ");
	scanf("%f", &p);
	d=fer(p);
	printf("\n The Fahrenheit Value- %f",d);
	return 0;
}
