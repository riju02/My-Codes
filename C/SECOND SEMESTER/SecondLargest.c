#include<stdio.h>

int main()
{
int a,b,c;
printf("\n Enter The First Number- ");
scanf("%d", &a);
printf("\n Enter The Second Number- ");
scanf("%d", &b);
printf("\n Enter The Third Number- ");
scanf("%d", &c);
if(a>b && a>c)
{
if(b>c)
printf("\n %d is Second Largest Number.",b);
else
printf("\n %d is Second Largest Number.",c);
}
else if(b>a && b>c)
{
if(a>c)
printf("\n %d is Second Largest Number.",a);
else
printf("\n %d is Second Largest Number.",c);
}
else
{
if(b>a)
printf("\n %d is Second Largest Number.",b);
else
printf("\n %d is Second Largest Number.",a);
}
return 0;
}
