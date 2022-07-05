#include <stdio.h>
int main() 
{
    int n1_035, n2_035, max;
    printf("Enter Two positive integers: ");
    scanf("%d %d", &n1_035, &n2_035);


    max = (n1_035 > n2_035) ? n1_035 : n2_035;

    while (max>1) 
	{
        if (max % n1_035 == 0 && max % n2_035 == 0) 
		{
            printf("The LCM of %d and %d is %d.", n1_035, n2_035, max);
            break;
        }
        ++max;
    }
    return 0;
}
