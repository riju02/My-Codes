
#include<stdio.h>
#include<math.h>

int main()
{
float a,b,c,s,area=0.0;
printf("\n Enter The Value of Three Sides Of Triangle-  ");
scanf("%f %f %f", &a, &b, &c);
s=(a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("\n Area of A Triangle- %f",area);
return 0;
}
