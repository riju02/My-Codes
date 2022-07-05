#include<stdio.h>

int swap(int a, int b)
{
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n The Swap Value is- %d & %d",a,b);
	return a,b;
}
int main()
{
	int p,q,c;
	printf("\n Enter The First Number- ");
	scanf("%d", &p);
	printf("\n Enter The Second Number- ");
	scanf("%d", &q);
	c=swap(p,q);
	return 0;
}
