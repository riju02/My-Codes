#include<stdio.h>
#include<conio.h>


int main(){
    int a, b, c, sum;
    printf("\n Enter any three number- ");
    scanf("%d%d%d",&a,&b,&c);

    sum= calsum(a,b,c);

    printf("\n Sum- %d",sum);
    return 0;
}
calsum(int x, int y, int z)
{
    int d;
    d=x+y+z;
    return d;
}


