#include<stdio.h>
#include<ctype.h>

int main()
{
	char a[100],i;
	int n,alp=0,dig=0,spe=0;
	printf("\n Enter The Range Of Array-  ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter The Elements a[%d]- ",i);
		scanf(" %c",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(isalpha(a[i]))
		{
			alp=alp+1;
		}
		else if(isdigit(a[i]))
		{
			dig=dig+1;
		}
		else
		{
			spe=spe+1;
		}
	}
	printf("\n The Number Of Alphabets are-  %d",alp);
	printf("\n The Number Of Digits are-  %d",dig);
	printf("\n The Number Of Special Characters are-  %d",spe);
	return 0;
}
