#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char *mem_allocation;
    mem_allocatiion=malloc(20*sizeof(char));
    if(mem_allocation==NULL){
        printf("Couldn't able to allocate requested memory \n");
        return 0;
    }else{
        strcpy(mem_allocation,"dynamic memory allocation for realloc function");
    }
    printf("Dynamically allocated memory content: %s\n",mem_allocation);
    mem_allocation=realloc(mem_allocation,100*sizeof(char));
    if(mem_allocation==NULL){
        printf("Couldn't able to allocate requested memory \n");
    }else{
        strcpy(mem_allocation,"space is extended upto 100 characters");
    }
    printf("Resized memory: %s\n",mem_allocation);
    free(mem_allocation);
    return 0;
}