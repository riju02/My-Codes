#include<stdio.h>
#include<ctype.h>
int main()
{
    char c;
    printf("enter a character: ");
    scanf("%c", &c);
    printf("isalnum: %s\n", isalnum(c)?"true":"false");
    printf("isalpha: %s\n", isalpha(c)?"true":"false");
    printf("isdigit: %s\n", isdigit(c)?"true":"false");
    printf("isgraph: %s\n", isgraph(c)?"true":"false");
    printf("islower: %s\n", islower(c)?"true":"false");
    printf("isupper: %s\n", isupper(c)?"true":"false");
    return 0;
}

