#include<stdio.h>

int div(int b, int a)
{
	if(b==0) return 0;
	if(a==0) return -1;
	if(a==1) return b;
	if(a>b)	return 0;
	else
	{
		return 1+div(b-a,a);
	}
}
int main()
{
	int c,d;
	printf("\n Enter Two Values- \n");
	scanf("%d %d", &d,&c);
	printf("\n The Division Value is- %d", div(d,c));
	return 0;
}

