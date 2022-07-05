#include<stdio.h>

int main()
{
int a;
printf("\n Enter A Number-  ");
scanf("%d", &a);
if(a>0)
printf("\n %d is Positive.",a);
else if(a<0)
printf("\n %d is Negative.",a);
else
printf("\n %d is Zero.",a);
return 0;
}
