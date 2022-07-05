#include<stdio.h>
#include<conio.h>
int main()
{
	int d,n,a,i,p;
	printf("\n Enter The First Value-    ");
	scanf("%d",&a);
	printf("\n Enter The Common Difference-    ");
	scanf("%d",&d);
	printf("\n Enter The Range-    ");
	scanf("%d",&n);
	printf("\n The AP Series is-   \n");
	for(i=1;i<=n;i++)
	{
		p=a+(i-1)*d;
		printf(" %d",p);
	}
	return 0;
}

