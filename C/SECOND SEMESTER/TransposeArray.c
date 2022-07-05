#include <stdio.h>

int main() 
{
    int a[10][10],s=1,i,j,r,c;
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
    printf("\n The Values Are:  \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d   ", a[i][j]);
        }
        printf("\n \n");
    }
    printf("\n The Values Are:  \n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d   ", a[j][i]);
        }
        printf("\n \n");
    }
    return 0;
}

