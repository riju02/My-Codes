#include<stdio.h>

int main()
{
int a;
printf("\n Enter A Number-  ");
scanf("%d", &a);
(a&1)?printf("Odd"): printf("Even");
return 0;
}
