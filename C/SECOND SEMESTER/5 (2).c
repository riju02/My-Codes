#include<stdio.h>
#include<string.h>
void my_strcat(char *a, char *b){
    int i=0, j=0;
    while (a[i]!='\0') i++;
    while (b[j]!='\0') 
        a[i++]=b[j++];        
}

void my_print_func(char *a, char *b){
    printf("string a: ");
    int i=0;
    while(a[i]!='\0')
        printf("%c", a[i++]);
    printf(" \t\t ");
}

int main(){
    char a[100], b[100];
    printf("enter string a: ");
    scanf("%s", a);
    printf("enter string a: ");
    scanf("%s", b);
    
    printf("using strcat to join \"%s\" and \"%s\" :\n", a, b);
    strcat(a,b);
    my_print_func(a,b);

    printf("\nnot using strcat to join \"%s\" and \"%s\":\n", a, b);
    my_strcat(a, b);
    my_print_func(a,b);    
}

