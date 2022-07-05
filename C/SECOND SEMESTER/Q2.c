#include<stdio.h>
#include<string.h>

struct student{
	int roll;
	char sec[10],name[10];
	int mark;
}s[100];

int main()
{
	int n,i;
	printf("\n Enter the student strength-");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("Enter the student details of student %d: ", i+1);
	printf("\n Name-");
	scanf("%s",&s[i].name);
	printf("\n Roll- ");
	scanf("%d", &s[i].roll);
	printf("\n Section- ");
	scanf("%s",&s[i].sec);
	printf("\n Mark- ");
	scanf("%d", &s[i].mark);
	getchar();
	}
	int max=0;
	for(i=0; i<n; i++)
	{
	if(s[max].mark < s[i].mark)
	{
	max=i;
	}
	}
	printf("\n The student details who get highest number");
	printf("\nName \tRoll \tSection\n");
	printf("%s \t%d \t%s", s[max].name, s[max].roll, s[max].sec);
	return 0;
}
