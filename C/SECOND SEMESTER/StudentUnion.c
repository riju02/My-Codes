#include<stdio.h>
#include<conio.h>

union student 
{
	char name[50];
	int roll;
	float marks;
};

int main()
{
	union student s[10];
	int i,n;
	printf("\n Enter Number of Students:   ");
	scanf("%d",&n);
	printf("\n");
	for(i=0;i<n;++i)
	{
		printf("\n Enter Information Of Student %d: ",i+1);
		printf("\n Enter Roll Number:   ");
		scanf("%d",&s[i].roll);
		printf("\n Information For Roll Number %d: ",s[i].roll);
		printf("\n Enter Name:   ");
		scanf("%s",&s[i]);
		printf("\n Name:  ");
		puts(s[i].name);
		printf("\n");
		printf("\n Enter Marks: ");
		scanf("%f",&s[i].marks);
		printf("\n Marks: %f",s[i].marks);
		printf("\n===============\n");
	}
	return 0;
}

