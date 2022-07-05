#include<iostream>

using namespace std;

int main(){
    int n,a[50],b[50],c[50],n1,n2,j,k,i;
  cout<<"\n Enter The Range-  ";
  cin>>n1;
  for(i=0;i<n1;i++)
  {
    cout<<"\n Enter The Value Of a["<<i<<"]   ";
    cin>>a[i];
  }
  cout<<"\n Enter The Range For Second Array-  ";
  cin>>n2;
  for(j=0;j<n2;j++)
  {
    cout<<"\n Enter The Value Of b["<<i<<"]    ";
    cin>>b[j];
  }
  i=0;
  j=0;
  k=0;
  while(i<n1 && j<n2)
  {
   if(a[i]<=b[j])
   {
    c[k]=a[i];
    i++;
    k++;
   }
   else
   {
    c[k]=b[j];
    j++;
    k++;
   }
  }
  while(i<n1)
  {
    c[k]=a[i];
    i++;
    k++;
  }
  while(j<n2)
  {
    c[k]=b[j];
    j++;
    k++;
  }
  cout<<"\n Final Array is-  ";
  for(i=0;i<n1+n2;i++)
  {
    cout<<c[i]<<" ";
  }
}