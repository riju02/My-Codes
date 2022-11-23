#include<conio.h>
#include<stdio.h>
void main()
{
int n,i,j,k,key,temp;
printf(" Enter the size of array- ");
scanf("%d",&n);
int arr[n];
printf(" Enter elements: \n "); 
for(i=0;i<=n-1;i++)
{
scanf("%d",&arr[i]);
}
for(j=1;j<=n-1;j++)
{
key=arr[j];
k=j-1;
while (k>=0 && arr[k]<key)
{
arr[k+1] = arr[k];
arr[k]=key;
k=k-1;
}
}
printf("\n The Sorted array is :\n");
for(i=0;i<=n-1;i++)
{
printf(" %d ",arr[i]);
} 
getch();
}