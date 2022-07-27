#include<stdio.h>

int main(){
    int i=10,*j,**k;
    j=&i;
    k=&j;
    printf("\n %d",i);
    printf("\n %d",j);
    printf("\n %d",k);
    return 0;
}