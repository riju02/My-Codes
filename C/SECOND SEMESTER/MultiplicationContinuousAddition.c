#include<stdio.h>

int mul(int a,int b)
{
	int c=0,i=1;
	while(i<=b)
	{
		c=c+a;
		i++;
	}
	return c;
}
int main()
{
	int p,q,r;
	printf("\n Enter The First Number-  ");
	scanf("%d", &p);
	printf("\n Enter The Second Number-  ");
	scanf("%d", &q);
	r=mul(p,q);
	printf("\n The Multiplication Value is- %d",r);
	return 0;
}

