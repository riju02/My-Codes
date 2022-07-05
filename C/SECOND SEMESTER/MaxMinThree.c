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
printf("\n %d is Maximum.",a);
if(b>c)
printf("\n %d is Minimum.",c);
else
printf("\n %d is Minimum.",b);
}
else if(b>a && b>c)
{
printf("\n %d is Maximum.",b);
if(a>c)
printf("\n %d is Minimum.",c);
else
printf("\n %d is Minimum.",a);
}
else
{
printf("\n %d is Maximum.",c);
if(b>a)
printf("\n %d is Minimum.",a);
else
printf("\n %d is Minimum.",b);
}
return 0;
}
