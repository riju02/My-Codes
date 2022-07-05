#include<stdio.h>

int main()
{
int a,b;
char ch;
printf("\n Enter The First Number- ");
scanf("%d", &a);
printf("\n Enter The Second Number- ");
scanf("%d",&b);
printf("\n Enter Operature in Words- ");
scanf(" %c",&ch);
switch(ch)
{
case '+': 
	  printf("\n Sum- %d",a+b);
	  break;
	  
case '-': 
	  printf("\n Substraction- %d",a-b);
	  break;
	  
case '*': 
	  printf("\n Multiplication- %d",a*b);
	  break;
	  
case '/': 
	  printf("\n Division- %d",a/b);
	  break;
	  
case '%': 
	  printf("\n Modulus- %d",a%b);
	  break;
	  
default: printf("\n You entered the wrong input.");
	 break;
}
return 0;
}	  
