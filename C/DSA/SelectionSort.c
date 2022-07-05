#include <stdio.h>

int main() 
{
    int a[100],n,i,j,min,temp,loc;
    printf("\n Enter The Number Of Elements-   ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n Enter a[%d] Elements:  ",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        min=a[i];
        loc=i;
        for(j=i+1;j<n;j++)
        {
            if(min>a[j])
            {
                min=a[j];
                loc=j;
            }
        }
    temp=a[i];
    a[i]=a[loc];
    a[loc]=temp;
    }
    printf("\n The Sorted Array In Ascending Order:  ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
