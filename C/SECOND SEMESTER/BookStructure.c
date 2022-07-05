#include<stdio.h>
#include<conio.h>
#include<string.h>

struct book
{
	float price;
	char name[100],author[100],publication[100];
}bk[100];

int main()
{
	int n,i;
	printf("\n Enter Your Book Number-  ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	printf("\n Book Name:   ");
	scanf("%s",&bk[i].name);
	printf("\n Book Author:   ");
	scanf("%s",&bk[i].author);
	printf("\n Book Publication:   ");
	scanf("%s",&bk[i].publication);
	printf("\n Book Price:   ");
	scanf("%f",&bk[i].price);
	}
	for(i=1;i<=n;i++)
	{
	printf("\n Book Name: %s",bk[i].name);
	printf("\n %d Book Author: %s",i,bk[i].author);
	printf("\n %d Book Publication: %s",i,bk[i].publication);
	printf("\n %d Book Price: %f",i,bk[i].price);
	}
	return 0;
}

