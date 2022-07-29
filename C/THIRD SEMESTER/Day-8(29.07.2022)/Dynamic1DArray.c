#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,*list;
    printf("\n Enter The No of elements: ");
    scanf("%d",&n);
    if(n<1){
        printf("Incorrect Value");
        return -1;
    }
    list=(int*)malloc(n*sizeof(int));
    if(!list){
        printf("Insufficient Memory");
        return -1;
    }
    /*Allow the uuser to enter values and display it*/
    /*print the values*/
    free(list);
    return 0;
}