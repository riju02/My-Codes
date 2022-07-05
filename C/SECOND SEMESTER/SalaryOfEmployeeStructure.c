#include<stdio.h>
#include<conio.h>
#include<string.h>

struct employee
{
	int empid,salary,hra,da;
	char name[100],gender[100],depertment[100];
	float Total;
}emp[100];

int main()
{
	int n,i;
	printf("\n Enter Your Employee Stength-  ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	printf("\n Employee Name:   ");
	scanf("%s",&emp[i].name);
	printf("\n Employee Gender:   ");
	scanf("%s",&emp[i].gender);
	printf("\n Employee Depertment:   ");
	scanf("%s",&emp[i].depertment);
	printf("\n Employee ID:   ");
	scanf("%d",&emp[i].empid);
	printf("\n Employee Salary:   ");
	scanf("%d",&emp[i].salary);
	}
	for(i=1;i<=n;i++)
	{
	emp[i].hra=emp[i].salary*0.1;
	emp[i].da=emp[i].salary*0.2;
	emp[i].Total=emp[i].salary+(emp[i].salary*0.1)+(emp[i].salary*0.2);
	printf("\n Name: %s",emp[i].name);
	printf("\n Gender: %s",emp[i].gender);
	printf("\n Depertment: %s",emp[i].depertment);
	printf("\n ID: %d",emp[i].empid);
	printf("\n HRA: %d",emp[i].hra);
	printf("\n DA: %d",emp[i].da);
	printf("\n Total Salary= %f",emp[i].Total);
	}
	return 0;
}

