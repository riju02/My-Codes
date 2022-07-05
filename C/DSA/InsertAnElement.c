#include<stdio.h>

int main()
{
    int n,i,b,a[100],d;
    printf("\n Enter The Range Of The Array- ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n Enter The Element in Position %d- ",i);
        scanf("%d",&a[i]);
    }
    printf("\n The Array is- ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n Enter The Element you want to insert- ");
    scanf("%d",&b);
    printf("\n Enter The Position Where you want to insert the element %d- ",b);
    scanf("%d",&d);
    for(i<n-1;i>=d;i--)
    {
        a[i+1]=a[i];
    }
    a[d]=b;
    printf("\n The New Array is- ");
    for(i=0;i<n+1;i++)
    {
        printf("%d ",a[i]);
    }
}