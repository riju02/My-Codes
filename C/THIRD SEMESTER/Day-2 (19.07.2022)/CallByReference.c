#include<stdio.h>

SwapByRef(int *x, int *y){
    int t;
    t=*x;
    *x=*y;
    *y=t;
    printf("\n x= %d y= %d",*x,*y);
}
int main(){
    int a=10,b=20;
    SwapByRef(&a,&b);
    printf("\n a= %d b= %d",a,b);
    return 0;
}