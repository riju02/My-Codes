#include <stdio.h>

int main() 
{
    int a[10][10],b[10][10],d[10][10],i,j,k,l,m,n,r,c;
    printf("\n Enter The Row:  ");
    scanf("%d",&r);
    printf("\n Enter The Column:  ");
    scanf("%d",&c);
    printf("\n Enter The Elements of First 2D Array-   ");
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
    printf("\n Enter The Elements of Second 2D Array-   ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("\n Enter Elements b[%d][%d]:   ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n The Values Are:  \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d   ", b[i][j]);
        }
        printf("\n \n");
	}
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
                d[i][j]=a[i][j]-b[i][j];
        }
    }
     printf("\n The Subtraction Values Are:  \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d   ", d[i][j]);
        }
        printf("\n \n");
    }
    return 0;
}

