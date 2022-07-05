#include<stdio.h>

int main()
{
char c,d;
printf("\n Enter A Charecter-  ");
scanf("%c", &c);
if(c>=65 && c<=90)
{
printf("\n The Charecter is %c in Upper Case", c);
d=c+32;
printf("\n The Charecter %c is in Lower Case is %c",c,d);
}
else
{
printf("\n The Charecter is %c in Lower Case", c);
d=c-32;
printf("\n The Charecter %c is in Lower Case is %c",c,d);
}
return 0;
}

