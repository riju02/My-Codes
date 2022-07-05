#include<stdio.h>
#include<conio.h>
int main()
{
  int n,a[50],b[50],c[50],n1,n2,j,k,i;
  printf("\n Enter The Range-  ");
  scanf("%d",&n1);
  for(i=0;i<n1;i++)
  {
    printf("\n Enter The Value Of a[%d]   ",i);
    scanf("%d",&a[i]);
  }
  printf("\n Enter The Range For Second Array-  ");
  scanf("%d",&n2);
  for(j=0;j<n2;j++)
  {
    printf("\n Enter The Value Of b[%d]    ",j);
    scanf("%d",&b[j]);
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
  printf("\n Final Array is-  ");
  for(i=0;i<n1+n2;i++)
  {
    printf("%d ",c[i]);
  }
}
