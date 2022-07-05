#include<stdio.h>
void find_reverse(int n, char *arr){
    for(int i=0; i<n/2; i++){
        int t=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=t;
    }
}

int main(){
    int n;
    printf("enter number of elements: ");
    scanf("%d", &n);
    char arr[n];
    for(int i=0; i<n; i++){
        printf("enter element:");
        scanf(" %c", &arr[i]);
    }
    find_reverse(n,arr);
    for(int i=0; i<n; i++)
        printf("%c ", arr[i]);
    return 0;
}