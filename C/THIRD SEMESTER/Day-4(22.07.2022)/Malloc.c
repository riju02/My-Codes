#include<stdio.h>
#include<stdlib.h>

int main(){
    int *pi;
    float *pj;
    pi=(int*)malloc(sizeof(int));
    pj=(float*)malloc(sizeof(float));
    *pi=10;
    *pj=3.56;
    printf("\n Integer= %d, Float= %f",*pi,*pj);
    free(pi);
    free(pj);
    return 0;
}