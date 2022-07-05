#include<stdio.h>

int avg(int a, int b, int c)
{
	return (a+b+c)/3;
}
int main()
{
	int x,y,z,d;
	printf("\n Enter The First Number-  ");
	scanf("%d", &x);
	printf("\n Enter The Second Number-  ");
	scanf("%d", &y);
	printf("\n Enter The Third Number-  ");
	scanf("%d", &z);
	d=avg(x,y,z);
	printf("\n The Average of three numbers- %d",d);
	return 0;
}
