#include<iostream>

using namespace std;

int main(){
    int n,i,b,a[100],d;
    cout<<"Enter The Range Of The Array- ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"\n Enter The Element in Position "<<i<<"- ";
        cin>>a[i];
    }
    cout<<"\n The Array is- ";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<" Enter The Element you want to insert- ";
    cin>>b;
    cout<<"Enter The Position Where you want to insert the element "<<b<<"-";
    cin>>d;
    for(i<n-1;i>=d;i--)
    {
        a[i+1]=a[i];
    }
    a[d]=b;
    cout<<"\n The New Array is- \n";
    for(i=0;i<n+1;i++)
    {
        cout<<a[i]<<" ";
    }
}