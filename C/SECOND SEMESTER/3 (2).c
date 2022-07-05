#include<stdio.h>
#include<string.h>

int find_length_without_library(char *str){
    int l=0;
    while(str[l]!='\0')
        l++;
    return l;
}

int main(){
    printf("enter a string: ");
    char str[100];
    scanf("%s", str);
    printf("length using strlen: %d", strlen(str));
    printf("\nlength without strlen: %d", find_length_without_library(str));
}

