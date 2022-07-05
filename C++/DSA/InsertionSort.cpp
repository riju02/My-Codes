#include<iostream>

using namespace std;

int main(){
    int a[100],n,i,j,min,temp,loc;
    cout<<"\n Enter The Number Of Elements-   ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"\n Enter a["<<i<<"] Elements:  ";
        cin>>a[i];
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
    cout<<"\n The Sorted List:  ";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}