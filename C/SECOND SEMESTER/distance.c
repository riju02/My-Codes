#include<stdio.h>
struct distance
{
    int km, m, cm;
    int cm_total;
};

int main()
{
    struct distance d1, d2;
    struct distance diff={0,0,0};
    
    printf("enter distance in start km m mm: ");
    scanf("%d %d %d", &d1.km, &d1.m, &d1.cm);
    
    printf("enter distance in end km m mm: ");
    scanf("%d %d %d", &d2.km, &d2.m, &d2.cm);    

    d1.cm_total=d1.km*1000*100 + d1.m*100 +d1.cm;
    d2.cm_total=d2.km*1000*100 + d2.m*100 +d2.cm;
    
    diff.cm_total=d2.cm_total-d1.cm_total;
    
    diff.cm=diff.cm_total%100;
    diff.cm_total/=100;

    diff.m=diff.cm_total%1000;

    diff.km=diff.cm_total/1000;
    printf("%dkm %dm %dcm ", diff.km, diff.m, diff.cm);
}
