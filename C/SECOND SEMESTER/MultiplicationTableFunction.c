#include<stdio.h>

int table(int a,int b)
{
	int c,i=1;
	printf("\n The Multiplication Table- ");
	while(i<=b)
	{
		c=a*i;
		printf("\n %d x %d= %d",a,i,c);
		i++;
	}
	return c;
}
int main()
{
	int p,q,d;
	printf("\n Enter The First Number- ");
	scanf("%d", &p);
	printf("\n Enter The Range Of The Table- ");
	scanf("%d",&q);
	d=table(p,q);
	return 0;
}
