#include<stdio.h>
#include<math.h>
int main()
{
	int n_035,r,a,e,c=0,b,s=0,d,i;
	printf("\n Enter The Number       ");
	scanf("%d",&n_035);
	d=e=n_035;
	while(n_035!=0)
	{
		r=n_035%10;
		c=c+1;
		n_035=n_035/10;
	}
	for(i=1;i<=c;i++)
	{
		a=d%10;
		d=d/10;
		s=s+a*pow(10,c-i);
	}
	
	printf("\n The Rotate Value of The Number %d- %d",e,s);
	return 0;
}

