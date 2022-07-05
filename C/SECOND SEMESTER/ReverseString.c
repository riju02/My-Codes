#include<stdio.h>

int main()
{
char s1[10];
char s2[10];
printf("\n Enter The String You Want To Reverse- ");
scanf(" %s", &s1);
int i=0;
while(s1[i]!='\0')
{
i++;
}
int j=0;
--i;
while(i>=0)
{
s2[j]=s1[i];
j++;
i--;
}
j++;
s2[j]=='\0';
printf("\n The Reverse String- %s\n",s2);
}

