#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n_035,s=0;
	printf("\n Enter The Number    ");
	scanf("%d",&n_035);
	for(i=1;i<n_035/2;i++)
	{
		if(n_035%i==0)
		{
			s=1;
			break;
		}
	}
	if(s==0)
	{
	 printf("\n The Number %d is Prime Number.",n_035);
	}
	else
	{
	 printf("\n The Number %d is NOT Prime Number.",n_035);
	}
	return 0;
}

