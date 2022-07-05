#include<iostream>

using namespace std;

int main(){
    int n,a[50],i,j,num;
	cout<<"Enter Value Of Range-   ";
	cin>>n;
	cout<<"Enter Value of An Array-\n";
	for(i=0;i<n;i++)
	{
		cout<<"Enter The Value Of a["<<i<<"]    ";
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\n Enter The  Position What You Want To Delete-   ";
	cin>>j;
	if(j>=n+1)
	{
		cout<<" Deletation is not Possible";
	}
	else
	{
		for(i=j-1;i<n-1;i++)
			{
			  a[i]=a[i+1];
			}
	}
	cout<<"Resultant Array is-   ";
	for(i=0;i<n-1;i++)
	{
		cout<<a[i]<<" ";
	}
}