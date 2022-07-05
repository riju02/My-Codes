#include <stdio.h>

int main() 
{
    int a[10][10],s=0,i,j,r,c;
    printf("\n Enter The Row:  ");
    scanf("%d",&r);
    printf("\n Enter The Column:  ");
    scanf("%d",&c);
    printf("\n Enter The Elements of 2D Array-   ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("\n Enter Elements a[%d][%d]:   ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n The Boundary Elements Are-  \n");
        	if(r==c)
        	{
        		for(i=0;i<r;i++)
    			{
        			for(j=0;j<c;j++)
        			{
        				if(i==0||j==0||i==c-1||j==c-1)
        				{		
            				printf(" %d",a[i][j]);
        				}
        				else 
        				{
        					printf("  ");
        				}
        			}
        			printf("\n \n");
        		}
    		}
        	else
        	{
        		for(i=0;i<r;i++)
    			{
        			for(j=0;j<c;j++)
        			{
        				printf(" %d",a[i][j]);
					}
					printf("\n \n");
				}		
			}
	return 0;
}



