#include <stdio.h>

int main() 
{
    int a[10][10],b[10][10],s=1,i,j,r1,r2,c1,c2,k,mul[10][10];
    printf("\n Enter The Row And Column Value Of First Matrix-   ");
    printf("\n Enter The Row:  ");
    scanf("%d",&r1);
    printf("\n Enter The Column:  ");
    scanf("%d",&c1);
    printf("\n Enter The Elements of First Matrix-   ");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("\n Enter Elements a[%d][%d]:   ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n Enter The Row And Column Value Of Second Matrix-   ");
    printf("\n Enter The Row:  ");
    scanf("%d",&r2);
    printf("\n Enter The Column:  ");
    scanf("%d",&c2);
    printf("\n Enter The Elements of Second Matrix-   ");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("\n Enter Elements b[%d][%d]:   ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    if(c1==r2)
    {
	printf("\n The Values Are:  \n");
    printf("\n The First Matrix:  \n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d   ", a[i][j]);
        }
        printf("\n \n");
    }
    printf("\n The Second Matrix:  \n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d   ", b[i][j]);
        }
        printf("\n \n");
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            mul[i][j]=0;    
			for(k=0;k<r1;k++)    
			{    
				mul[i][j]+=a[i][k]*b[k][j];    
			}    
        }
    }
    printf("\n The Resultant Matrix:  \n");
    for(i=0;i<r1;i++)    
	{    
		for(j=0;j<c2;j++)    
		{    
			printf("%d\t",mul[i][j]);    
		}    
		printf("\n");    
	}
	}
	else
	printf("\n The Multiplication is not possible.");
    return 0;
}

