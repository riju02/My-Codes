#include<iostream>

using namespace std;

int main(){
     int a[100],search,mid,n,i,flag,l,u;
    cout<<"\n Enter The Range For The Array- ";
    cin>>n;
    cout<<"\n Enter The Array Value in Sorting manner- ";
    for(i=0;i<n;i++)
    {
        cout<<"\n Enter The element "<<i<< "- ";
        cin>>a[i];
    }
    i=0;
    cout<<"\n Enter The Element You want to search- ";
    cin>>search;
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
        cout<<"\n The Element "<<search<<" is found in the poistion "<<i;
    }
}