#include<stdio.h>

union student{
    int rollno;
    char gender;
    float marks;
}s1;

int main(){
    s1.rollno=20;
    printf("\n %d",s1.rollno);
    
    s1.marks=90.0;
    printf("\n %f",s1.marks);

    return 0;
}