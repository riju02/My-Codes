#include<stdio.h>

int gcd(int a, int b)
{
	return a,b;
}
int main()
{
    int n1, n2, i, g, k;

    printf("Enter First integer: ");
    scanf("%d", &n1);
    printf("\n Enter Second integer:  ");
    scanf("%d", &n2);
	k=gcd(n1,n2);
    for(i=1; i <= n1 && i <= n2; ++i)
    {
        if(n1%i==0 && n2%i==0)
            g = i;
    }

    printf("G.C.D of %d and %d is %d", n1, n2, g);

    return 0;
}
