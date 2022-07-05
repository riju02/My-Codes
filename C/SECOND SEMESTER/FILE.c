#include<stdio.h>  
int main( )  
{  
FILE *file1,*file2;    
char ch;
file1 = fopen("C:\\Users\\KIIT\\2nd Sem\\C_Programming.txt","r+");
file2 = fopen("C:\\Users\\KIIT\\2nd Sem\\Programming.txt","w+"); 
while((ch=fgetc(file1))!=EOF)
{
	fputc(ch,file2);
}
fclose(file1);
fclose(file2);
}
