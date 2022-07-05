#include<stdio.h>

int mul(int b,int a)
{
	if(b==1)
	return a;
	else
	return a+mul(b-1,a);
}
int main()
{
	int c,d;
	printf("\n Enter Two Numbers- \n");
	scanf("%d %d", &d, &c);
	printf("\n The Multiplication value- %d", mul(d,c));
	return 0;
}

