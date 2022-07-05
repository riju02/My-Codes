#include<stdio.h>

int main()
{
int a,b,c,d,e,s;
printf("\n Enter A Number(Max Three Digits)-  ");
scanf("%d", &a);
d=a;
b=a%10;
c=b*2;
a=(a-b)/10;
s=a-c;
if(s%7==0)
{
printf("\n The number %d is divisible by 7.",d);
printf("\n The Square of %d is- %d", d, d*d);
}
else
{
printf("\n The number %d is not divisible by 7.",d);
printf("\n The Cube of %d is- %d", d, d*d*d);
}
return 0;
}
