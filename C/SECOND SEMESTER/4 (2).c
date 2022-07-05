#include<stdio.h>
#include<string.h>
void my_strcpy(char *a, char *b){
    int i=0;
    do{
        a[i]=b[i++];
    }while(b[i]!='\0');
}

void my_print_func(char *a, char *b){
    printf("string a\tstring b\n");
    int i=0;
    while(a[i]!='\0')
        printf("%c", a[i++]);
    printf(" \t\t ");
    i=0;
    while(b[i]!='\0')
        printf("%c", b[i++]);
}

int main(){
    char a[100], b[100];
    printf("enter string a: ");
    scanf("%s", a);
    printf("enter string a: ");
    scanf("%s", b);
    
    printf("using strcpy:\n");
    strcpy(a,b);
    my_print_func(a,b);

    printf("\nnot using strcpy:\n");
    my_strcpy(a, b);
    my_print_func(a,b);    
}

