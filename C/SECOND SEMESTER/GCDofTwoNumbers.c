#include <stdio.h>

int main() 
{
    int n1_035, n2_035, i, gcd, lcm;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1_035, &n2_035);

    for (i = 1; i <= n1_035 && i <= n2_035; ++i) 
	{
        if (n1_035 % i == 0 && n2_035 % i == 0)
            gcd = i;
    }
    printf("\n The GCD of two numbers %d and %d is %d.", n1_035, n2_035, gcd);
    return 0;
}

