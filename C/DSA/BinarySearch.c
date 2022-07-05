#include<stdio.h>

int main()
{
    int a[100],search,mid,n,i,flag,l,u;
    printf("\n Enter The Range For The Array- ");
    scanf("%d",&n);
    printf("\n Enter The Array Value in Sorting manner- ");
    for(i=0;i<n;i++)
    {
        printf("\n Enter The %d element- ",i);
        scanf("%d", &a[i]);
    }
    i=0;
    printf("\n Enter The Element You want to search- ");
    scanf("%d",&search);
    while(i<n && search!=0)
    {
        mid=(l+u)/2;
        if(a[i]==search)
        {
            flag=1;
            break;
        }
        else if(search<a[i])
        {
            l=mid+1;
        }
        else
        {
            u=mid-1;
        }
        i++;
    }
    if(flag==1)
    {
        printf("\n The Element %d is found in the poistion %d.",search,i);
    }
}