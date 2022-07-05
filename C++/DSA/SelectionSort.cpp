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
    cout<<"\n The Sorted Array In Ascending Order:  ";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}