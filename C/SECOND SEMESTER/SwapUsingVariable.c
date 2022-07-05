#include<stdio.h>

int main()
{
int a,b,c;
printf("\n Enter The First Number-   ");
scanf("%d", &a);
printf("\n Enter The Second Number-   ");
scanf("%d", &b);
c=a;
a=b;
b=c;
printf("\n The Swap Two Corresponding Value is- %d %d", a,b);
return 0;
}

