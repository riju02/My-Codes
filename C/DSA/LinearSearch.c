#include<stdio.h>

int main()
{
    int n,i,a[100],search,flag;
    printf("\n Enter The Range Of The Array- ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n Enter Position %d Element- ",i);
        scanf("%d",&a[i]);
    }
    printf("\n The Array is- ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    i=0;
    printf("\n Enter The Element you want to search?");
    scanf("%d",&search);
    while(i<n)
    {
        if(a[i]==search)
        {
            flag=1;
        }
        i++;
    }
    if(flag==1)
    {
        printf("\n The Element is found.");
    }
    else{
        printf("\n The Element is not found.");
    }
}