#include<stdio.h>  
int main( )  
{  
FILE *file1,*file2;    
file1 = fopen("C:\\Users\\KIIT\\2nd Sem\\C_Programming.txt","w"); 
fputs("Ritam",file1);
fclose(file1); 

}
