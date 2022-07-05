#include<stdio.h>

int main()
{
	int i;
	printf("\n All Even Numbers are-       ");
	for(i=0;i<=100;i++)
	{
		if(i%2==1)
		continue;
		printf(" %d,",i);
	}
	return 0;
}

