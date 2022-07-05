#include<stdio.h>

int main()
{
char c;
printf("\n Enter A Charecter-  ");
scanf("%c", &c);
if(c=='a' || c=='e' || c=='i' || c=='o'  || c=='u' ||c=='A' || c=='E' || c=='I' || c=='O'  || c=='U')
printf("\n The Charecter %c is Vowel", c);
else
printf("\n The Charecter %c is Consonent", c);
return 0;
}
