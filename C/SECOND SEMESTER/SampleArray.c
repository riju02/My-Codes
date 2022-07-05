#include<stdio.h>

int main()
{
	int i,a[50];
	for(i=0;i<10;i++)
	{
		printf("\n Enter The Value of Array a[%d]- ",i);
		scanf("%d",&a[i]);
	}
	printf("\n The Value of Array- ");
	for(i=0;i<10;i++)
	{
		printf("\n a[%d]- %d",i,a[i]);
	}
	return 0;
}
