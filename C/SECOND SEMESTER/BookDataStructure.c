#include<stdio.h>
#include<string.h>
struct BookDetails 
{
char name[50];
char arname[50];
float price;
}Book_1,Book_2,Book_3;
int main()
{
    strcpy(Book_1.name,"The sad Truth");
    strcpy(Book_1.arname,"Musro advande");
    Book_1.price=250.65;
    strcpy(Book_2.name,"Wings Of Fire");
    strcpy(Book_2.arname,"APJ Abdul Kalam");
    Book_2.price=150.65;
    strcpy(Book_3.name,"Three Idiots");
    strcpy(Book_3.arname,"Chetan Bhagat");
    Book_3.price=250.00;
    printf("The structure is :\n");
    printf("The name of the book is : %s\n",Book_1.name);
    printf("The name of the aruthor is : %s\n",Book_1.arname);
    printf("The price of the book is : %0.1f\n",Book_1.price);
    printf("The name of the book is : %s\n",Book_2.name);
    printf("The name of the aruthor is : %s\n",Book_2.arname);
    printf("The price of the book is : %0.1f\n",Book_2.price);
    printf("The name of the book is : %s\n",Book_3.name);
    printf("The name of the aruthor is : %s\n",Book_3.arname);
    printf("The price of the book is : %0.1f\n",Book_3.price);
}
