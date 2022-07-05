#include <stdio.h>  
void swap(int *, int *);    
int main()  
{  
    int a,b;
	printf("\n Enter The First Value-  ");
	scanf("%d",&a);
	printf("\n Enter The Second Value-  ");
	scanf("%d",&b); 
    swap(&a,&b);   
    printf("\n Swap Value- %d, %d",a,b);
}  
void swap (int *a, int *b)  
{  
    int temp;   
    temp = *a;  
    *a=*b;  
    *b=temp;     
}  
