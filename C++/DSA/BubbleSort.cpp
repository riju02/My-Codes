#include<iostream>

using namespace std;

int main(){
    int a[50], n, i, j, t;
cout<<"\n Please Enter The Number Of Elements You Want In The Array: ";
cin>>n;
for(i = 0; i < n; i++)
{
cout<<"\n Please Enter The Value Of Element "<<i<<": ";

cin>>a[i];
}
for(i = 0; i < n - 1; i++)
{
for(j = 0; j < n - i - 1; j++)

{
if(a[j] > a[j + 1])
{
t = a[j];
a[j] = a[j + 1];
a[j + 1] = t;
}
}
}
cout<<"\n Array after implementing bubble sort: ";
for(i = 0; i < n; i++)
{
cout<< a[i]<<" ";
}
}