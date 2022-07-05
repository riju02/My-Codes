#include<string.h>
#include<stdio.h>
int main(){
    char roll[10]="1234567890";
    char name[20], addr[20];
    int a=1E-2;

    printf("enter name: ");
    scanf("%[^\n]s", name);
    getchar();

    printf("enter addr: ");
    scanf("%[^\n]s", addr);
    getchar();

    printf("enter roll: ");
    scanf("%[^\n]s", roll);
    getchar();
    
    char total[100];
    strcpy(total, name);
    strcat(total, "\n");
    strcat(total, addr);
    strcat(total, "\n");
    strcat(total, roll);
    printf("%s", total);
    return 0;    
}