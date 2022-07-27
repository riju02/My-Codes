#include<stdio.h>

struct student{
    int rollno;
    char gender;
    float marks;
}s1;

int main(){
    s1.rollno=20;
    s1.gender="M";
    s1.marks=90.0;

    printf("\n %f",s1.marks);
    printf("\n %d",s1.rollno);
    printf("\n %c",s1.gender);

    return 0;
}