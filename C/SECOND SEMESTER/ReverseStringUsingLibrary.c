#include<stdio.h>
#include<string.h>

int main()
{
	char s1[100],revs[100];
	printf("\n Enter The String You Want To Reverse- ");
	scanf(" %s", &s1);
	printf("\n The Reverse String is- %s",strrev(s1) );
	return 0;
}

