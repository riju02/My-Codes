#include <stdio.h>

int main() 
{
    int a[10][10],s=0,i,j,r,c;
    printf("\n Enter The Row:  ");
    scanf("%d",&r);
    printf("\n Enter The Column:  ");
    scanf("%d",&c);
    printf("\n Enter The Elements of Matrix-   ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("\n Enter Elements a[%d][%d]:   ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n The Values Are:  \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d   ", a[i][j]);
        }
        printf("\n \n");
    }
    printf("\n The Diagonal Elements are- ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==j)
            {
                printf("\n %d",a[i][j]);
            }
        }
    }
    printf("\n The Reverse Diagonal Elements are- ");
	for(i=0;i<r;i++)
    {
        printf("\n %d",a[i][r-i-1]);
    }
    return 0;
}

