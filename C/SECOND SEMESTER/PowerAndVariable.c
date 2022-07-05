#include<stdio.h>
int main()
{
    int n,count,i,nc;
    printf("\n Enter The Value of Y- ");
    scanf("%d", &n);
    for(i=2; i<n/2; i++)
	{
        count=0;
		nc=i;
        if(n%i==0)
		{
	        while(nc<n)
			{
	            nc*=i;
	            count++;
			}
        }
        if(nc==n)
        {
			printf("\n The value of X-%d and N-%d", i, count+1);
		}
    }
    return 0;
}
