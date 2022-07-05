#include<stdio.h>
#include<math.h>

int main()
{
double a,b,c,r1,r2,d,rp,ip;
printf("\n Enter the value of the Coefficient of Quadretic Equation-   ");
scanf("%lf %lf %lf", &a, &b, &c);
d=b*b-4*a*c;
if(d>0)
{
r1=(-b+sqrt(d))/(2*a);
r2=(b+sqrt(d))/(2*a);
printf("\n Two Roots are- %lf and %lf",r1,r2);
}
else if(d==0)
{
r1=r2=-b/(2*a);
printf("\n Two Roots are- %lf and %lf",r1,r2);
}
else
{
rp=-b/(2*a);
ip=sqrt(-d)/(2*a);
printf("\n Two Roots are- %lf and %lf",rp,ip);
}
return 0;
}

