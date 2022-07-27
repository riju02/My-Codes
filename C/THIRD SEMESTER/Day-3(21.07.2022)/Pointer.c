#include<stdio.h>

int main(){
    int intVal=10;
    printf("\n Address of intVal=%u",&intVal);
    printf("\n Value of intVal=%d",intVal);

    int i=10;
    int *j;
    j=&i;
    printf("\n %d",j);
    printf("\n %d",i);
    return 0;
}