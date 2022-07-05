#include<stdio.h>

int main()
{
 	int n1, n2, n3, i, j,a[100],c[100],b[100];
 	printf("\n Enter the number of elements for  First Array  :  ");
 	scanf("%d", &n1);          
 	for(i = 0; i < n1; i++)
  	{
  		printf("\nEnter the elements for First Array :  ");
      	scanf("%d", &a[i]);
  	}
  	printf("\n Enter the number of elements for  Second Array  :  ");
 	scanf("%d", &n2);   
 	for(i = 0; i < n2; i++)
  	{
  		printf("\nEnter the elements for Second Array  :  ");
      	scanf("%d", &b[i]);
  	}
	n3 = n1 + n2;           
  	for(i = 0; i < n1; i++)
  	{
      	c[i] = a[i];
  	}
 	for(i = 0, j = n1; j < n3 && i < n2; i++, j++)
  	{
  		c[j] = b[i];
  	}
 	printf("\n a[%d] Array Elements After Merging \n", n3); 
 	for(i = 0; i < n3; i++)
  	{
    	printf(" %d \t ",c[i]);
  	}
  	return 0;
}



