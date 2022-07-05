#include<iostream>

using namespace std;

int main(){
    int n,i,a[100],search,flag;
    cout<<"\n Enter The Range Of The Array- ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"\n Enter Position "<<i<<" Element- ";
        cin>>a[i];
    }
    cout<<"\n The Array is- ";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    i=0;
    cout<<"\n Enter The Element you want to search? \n";
    cin>>search;
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
        cout<<"\n The Element is found.";
    }
    else{
        cout<<"\n The Element is not found.";
    }
}