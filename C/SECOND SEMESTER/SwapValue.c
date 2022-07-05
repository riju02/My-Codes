#include<stdio.h>

int main()
{
int a,b;
printf("\n Enter The Two Values-   ");
scanf("%d %d", &a, &b);
a=a+b;
b=a-b;
a=a-b;
printf("\n The Swap Value is- %d, %d",a,b);
return 0;
}
