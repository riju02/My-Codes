#include<stdio.h>
#include<string.h>
void my_strrev(char *a)
{
    int i=0;
    while (a[i]!='\0') i++;
    for(int j=0; j<=i/2; j++)
	{
        char t=a[j];
        a[j]=a[i-j-1];
        a[i-j-1]=t;
    }
}

void my_print_func(char *a)
{
    printf("string a: ");
    int i=0;
    while(a[i]!='\0')
        printf("%c", a[i++]);
    printf(" \t\t ");
}

int main()
{
    char a[100];
    printf("enter string a: ");
    scanf("%s", a);
    
    printf("using strrev to reverse \"%s\":\n", a);
    strrev(a);
    my_print_func(a);

    printf("\nnot using strrev to reverse \"%s\":\n", a);
    my_strrev(a);
    my_print_func(a);    
}
