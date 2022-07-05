#include<stdio.h>

int sod(int n)
{
	int s=0,r;
	while(n!=0)
	{
	  r=n%10;
	  s=s+r;
	  n=n/10;
	}
	return s;
}
int main()
{
	int a,r;
	printf("\n Enter Any Numbers    ");
	scanf("%d",&a);
	r=sod(a);
	printf("\n Sum Of Digits= %d ",r);
	return 0;
}

