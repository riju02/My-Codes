#include<stdio.h>
#include<string.h>

struct student
{
    char name[10];
    int roll;
    char section[10];
    float marks;
};
int main()
{
struct student std1 = {"Ritam",2130035,"A",80};
struct student *ptr;
ptr=&std1;
printf("Name : %s \n",(*ptr).name);
printf("Roll Number : %d \n",(*ptr).roll);

printf("Section : %s\n",(*ptr).section);
printf("Marks of Student : %f \n",(*ptr).marks);
return 0;
}
