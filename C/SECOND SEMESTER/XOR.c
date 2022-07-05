#include<stdio.h>

int main()
{
	int n,c=0;
	printf("\n Enter The Range Of Array- ");
	scanf("%d",&n);
	int a[n],b[n];
	for(int i=0;i<n;i++)
	{
		printf("\n Enter The Element Of First Array- ");
		scanf("%d", &a[i]);
	}
	for(int i=0;i<n;i++)
	{
		printf("\n Enter The Element Of Second Array- ");
		scanf("%d", &b[i]);
	}
	printf("\n The XOR array is- ");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i]==b[j])
			{
				c++;
			}
		}
	}
	int in[c];
	int k=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i]==b[j])
			{
				in[k]=a[i];
				k++;
			}
		}
	}
	for(int i=0;i<2*n;i++)
	{
		if(i<n)
		{
			int t=0;
			for(int j=0;j<c;j++)
			{
				if(a[i]==in[j])
				{
					t++;
				}
			}
			if(t==0)
			{
				printf("%d ",a[i]);
			}
		}
		else
		{
			int t=0;
			for(int j=0;j<c;j++)
			{
				if(b[i-n]==in[j])
				{
					t++;
				}
			}
			if(t==0)
			{
				printf("%d ",b[i-n]);
			}
		}
	}
	return 0;
}
