#include<stdio.h>
struct Z
{
    int rl, im;
};

int main()
{
    struct Z d1, d2, sum;
    
    printf("enter point in real and imaginary values: ");
    scanf("%d %d", &d1.rl, &d1.im);
    
    printf("enter point in real and imaginary values: ");
    scanf("%d %d", &d2.rl, &d2.im); 
    
    sum.rl=d1.rl+d2.rl;
    sum.im=d1.im+d2.im;

    printf("sum of both: %d + %di", sum.rl, sum.im);

}
