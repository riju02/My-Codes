#include<stdio.h>
#include<math.h>

int main()
{
	int x,n,i;
	float y=1;
	printf("\n Enter The Value- ");
	scanf("%d",&x);
	printf("\n Enter The Power Value- ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		y=y*float(x);
	}
	printf("\n The Value is- %f",y);
	return 0;
}
