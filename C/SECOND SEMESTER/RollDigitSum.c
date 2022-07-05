#include<stdio.h>

int main()
{
int a,b,c,d,e,f,g,h,i,s;
printf("\n Enter Your Roll Number(Max Five Digits)- ");
scanf("%d", &a);
b=a%10;
c=(a-b)/10;
d=c%10;
e=(c-d)/10;
f=e%10;
g=(e-f)/10;
h=g%10;
i=(g-h)/10;
s=b+d+f+h+i;
printf("\n Sum of The Roll Number- %d", s);
return 0;
}
