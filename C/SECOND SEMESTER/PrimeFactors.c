#include<stdio.h>
#include<conio.h>
int main()
{
	int n,f=2;
	printf("\n Enter The Number    ");
	scanf("%d",&n);
	printf("\n The Prime Factors- ");
	while(n>1)
	{
		if(n%f==0)
		{
		 printf("\n %d",f);
		 n=n/f;
		}
		else
		f++;
	}
	return 0;
}

