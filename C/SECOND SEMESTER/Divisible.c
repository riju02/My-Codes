#include<stdio.h>

int main()
{
int a;
printf("\n Enter Any Number-  ");
scanf("%d", &a);
if(a%5==0)
printf("\n The Number %d is Divisible by 5",a);
else
printf("\n The Number %d is Not Divisible by 5",a); 
return 0;
}
