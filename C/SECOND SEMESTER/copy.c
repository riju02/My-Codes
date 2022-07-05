#include<stdio.h>
#include<string.h>
struct Std
{
    char name[20];
    int roll;
    char address[30];
};

int main()
{
    struct Std std1, std2;

    printf("enter student1 details\n");
    printf("enter name of student: ");
    gets(std1.name);
    //getchar();

    printf("enter student roll: ");
    scanf("%d", &std1.roll);
    getchar();

    printf("enter address of student: ");
    gets(std1.address);
    //getchar();
    
    printf("\nenter student2 details\n");
    printf("enter name of student: ");
    gets(std2.name);
    //getchar();

    printf("enter student roll: ");
    scanf("%d", &std2.roll);
    getchar();

    printf("enter address of student: ");
    gets(std2.address);
    //getchar();

    printf("\ncopying over to student2 details");
    std2.roll=std1.roll;
    strcpy(std2.address, std1.address);
    strcpy(std2.name, std1.name);

    printf("\nname of second student: %s", std2.name);
    printf("\naddress of second student: %s", std2.address);
    printf("\nroll of second student: %d", std2.roll);
}
