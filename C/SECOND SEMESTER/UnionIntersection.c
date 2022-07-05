#include<stdio.h>

int main()
{
	int a[10],i,n,b[10],k=0,inter[10],u[10];
	int j,m;
	printf("\n Enter how many number: ");
	scanf("%d",&n);
	printf("\n Enter the number- ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("\n Enter the number- ");
	for(i=0;i<n;i++)
	scanf("%d",&b[i]);
	for(i=0;i<n;i++)
	{
	u[k]=a[i];
	k++;
	}
	for(i=0;i<n;i++)
	{
	for(j=0;j<n;j++)
	{
	if(b[i]==a[j])
	break;
	}
	if(j==n)
	{
	u[k]=b[i];
	k++;
	}
	}
	m=0;
	for(i=0;i<n;i++)
	{
	for(j=0;j<n;j++)
	{
	if(a[i]==b[j])
	{
	inter[m]=a[i];
	m++;
	}
	}
	}
	printf("\n The union is :");
	for(i=0;i<k;i++)
	{
	printf("%d,",u[i]);
	}
	printf("\n The intersection is :");
	
	for(i=0;i<m;i++)
	{
	printf("%d,",inter[i]);
	}
	
	return 0;
}
