#include<stdio.h>
void swap(int *a, int *b){
    int t=*a;
    *a=*b;
    *b=t;
}

int main(){
    int a,b;
    printf("enter 2 numbers: ");
    scanf("%d %d", &a, &b);

    swap(&a, &b);

    printf("swapped: %d %d", a,b);
}