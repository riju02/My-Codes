#include<stdio.h>
int strcmp(char *a, char *b)
{
    int i=0, val=0;
    do{
        val=a[i]-b[i];
        if(val!=0)
            break;
        i++;
    }
	while(b[i]!='\0' || a[i]!=0);
    if(val>0)
        return 1;
    else if (val<0)
        return -1;
    else
        return 0;    
}

int main()
{
    char a[100], b[100];
    printf("enter string a: ");
    scanf("%s", a);
    printf("enter string a: ");
    scanf("%s", b);
    
    printf("\n comparing \"%s\" and \"%s\" without library functions: ", a, b);
    printf("%d", strcmp(a,b)); 
}
