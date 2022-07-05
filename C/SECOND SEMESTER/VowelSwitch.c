#include<stdio.h>

int main()
{
char ch;
printf("\n Enter The Vowel- ");
scanf(" %c",&ch);
switch(ch)
{
case 'A': printf("\n %c is changecase.", ch+32);
	  break;
case 'a': printf("\n %c is changecase.", ch-32);
	  break;
case 'E': printf("\n %c is changecase.", ch+32);
	  break;
case 'e': printf("\n %c is changecase.", ch-32);
	  break;
case 'I': printf("\n %c is changecase.", ch+32);
	  break;
case 'i': printf("\n %c is changecase.", ch-32);
	  break;
case 'O': printf("\n %c is changecase.", ch+32);
	  break;
case 'o': printf("\n %c is changecase.", ch-32);
	  break;
case 'U': printf("\n %c is changecase.", ch+32);
	  break;
case 'u': printf("\n %c is changecase.", ch-32);
	  break;
default: printf("\n You entered wrong input.");
}
return 0;
}
