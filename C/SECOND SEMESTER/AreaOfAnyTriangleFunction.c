#include<stdio.h>
#include<math.h>

float area(float a, float b, float c)
{
	float s,area=0.0;
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	return area;
}
int main()
{
float p,q,r,a=0.0;
printf("\n Enter The Value of Three Sides Of Triangle-  ");
scanf("%f %f %f", &p, &q, &r);
a= area(p,q,r);
printf("\n Area of A Triangle- %f",a);
return 0;
}
