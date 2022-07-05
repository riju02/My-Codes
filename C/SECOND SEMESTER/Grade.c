#include<stdio.h>

int main()
{
int m;
printf("\n Enter The Marks of the Student-  ");
scanf("%d", &m);
if(m<=100 && m>=90)
printf("\n The Grade is 'o'");
else if(m<90 && m>=80)
printf("\n The Grade is 'E'");
else if(m<80 && m>=70)
printf("\n The Grade is 'A'");
else if(m<70 && m>=60)
printf("\n The Grade is 'B'");
else if(m<60 && m>=50)
printf("\n The Grade is 'C'");
else if(m<50 && m>=40)
printf("\n The Grade is 'D'");
else
printf("\n The Grade is 'F'");
return 0;
}




