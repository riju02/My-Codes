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
    for(i=1;i<=n-1;i++)
    {
        temp=a[i];
        j=i-1;
        while(temp<a[j] && j>=0)
        {
            a[j+1]=a[j];
            j=j-1;
        }
    a[j+1]=temp;
    }
    printf("\n The Sorted List:  ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
