#include<stdio.h>

int main()
{
	char a[100],i;
	int n;
	printf("\n Enter The Range Of Array-  ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter The Elements a[%d]- ",i);
		scanf(" %c",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U')
		{
			printf("\n The ASCII Value of a[%d]-%c is %d ",i,a[i],a[i]);
		}
	}
	return 0;
}
