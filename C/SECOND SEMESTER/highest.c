#include<stdio.h>
struct Student
{
    char name[20];
    int roll, marks;
};
int main()
{
    struct  Student s1[5];
    int i;
    for(i=0; i<5; i++)
	{
        printf("enter name of student(%d): ", i+1);
        gets(s1[i].name);
        printf("enter roll number: ");
        scanf("%d", &s1[i].roll);
        printf("enter marks: ");
        scanf("%d", &s1[i].marks);
        getchar();;
    }

    int max=0;
    for(i=0; i<5; i++)
	{
        if(s1[max].marks < s1[i].marks)
            max=i;
    }

    printf("details of student with max marks: \n");
    printf("name \troll \tmarks\n");
    printf("%s \t%d \t%d", s1[max].name, s1[max].roll, s1[max].marks);
    return 0;
}
