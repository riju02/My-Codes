#include<stdio.h>
#include<conio.h>
#include<string.h>

struct emp
{
	int empno;
	char name[20];
	int bpay,allow,ded,npay;
}e[10];

int main()
{
	int i,n;
	printf("\n Enter The Number Of Employees:   ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter The Employee Number:   ");
		scanf("%d",&e[i].empno);
		printf("\n Enter The Name:   ");
		scanf("%s",&e[i].name);
		printf("\n Enter The Basic Pay, Allowances & Deductions:   ");
		scanf("%d%d%d",&e[i].bpay,&e[i].allow,&e[i].ded);
		e[i].npay= e[i].bpay+e[i].allow-e[i].ded;
	}
	for(i=0;i<n;i++)
	{
		printf("\n Employee Number: %d",e[i].empno);
		printf("\n Employee Name: %s",e[i].name);
		printf("\n Employee Basic Pay: %d",e[i].bpay);
		printf("\n Employee Allowance: %d",e[i].allow);
		printf("\n Employee Deduction: %d",e[i].ded);
		printf("\n Employee Npay: %d",e[i].npay);
	}
	return 0;
}

