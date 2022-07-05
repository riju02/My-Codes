#include <stdio.h>

int lcm(int a, int b)
{
	int max;
	max = (a > b) ? a : b;

    while (max>1) 
	{
        if (max % a == 0 && max % b == 0) 
		{
            printf("The LCM of %d and %d is %d.", a, b, max);
            break;
        }
        ++max;
    }
    return max;
}
int main() 
{
    int n1_035, n2_035,c;
    printf("Enter Two positive integers: ");
    scanf("%d %d", &n1_035, &n2_035);
	c=lcm(n1_035, n2_035);
    return 0;
}
