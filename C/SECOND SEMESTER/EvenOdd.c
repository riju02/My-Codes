#include<stdio.h>

int main()
{
int a,b;
printf("\n Enter Any Value-   ");
scanf("%d", &a);
if(a%2==0)
{
printf("\n %d is Even.",a);
b=a/2;
printf("\n The Devided Value is- %d",b);
}
else
{
printf("\n %d is Odd.",a);
b=a*2;
printf("\n The Multiplication Value is- %d",b);
}
return 0;
}
