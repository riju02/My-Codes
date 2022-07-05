#include<stdio.h>

int div(int a,int b)
{
	int i=0;
	while(a>=1)
	{
		a=a-b;
		i++;
	}
	return i;
}
int main()
{
	int p,q,r;
	printf("\n Enter The First Number-  ");
	scanf("%d", &p);
	printf("\n Enter The Second Number-  ");
	scanf("%d", &q);
	r=div(p,q);
	printf("\n The Division Value is- %d",r);
	return 0;
}
