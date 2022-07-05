#include<stdio.h>
char is_substr(char *str1, int n1, char *str2, int n2)
{
	int i,j;
    char flag=0;
    if(n2>n1)
        return 0;
    
    for(i=0; i<n1; i++)
	{
        for(j=0; j<n2; j++)
		{
            char *ch1=&str1[i+j];
            char *ch2=&str2[j];
            if(i+j<n1 && *ch2==*ch1)
                flag=1;
            else
			{
                flag=0;
                break;
            }
        } 
        if(flag)
            break;
    } 
    return flag;        
}

int main()
{
    int n1, n2;
    
    printf("enter 1st string length: ");
    scanf("%d", &n1);
    char str1[n1];
    
    printf("enter 2nd string length: ");
    scanf("%d", &n2);
    char str2[n2];

    getchar();
    
    printf("enter 1st string: ");
    fgets(str1, n1+1, stdin);
    
    getchar();

    printf("enter 2nd string: ");
    fgets(str2, n2+1, stdin);
        
    if(is_substr(str1, n1, str2, n2))
        printf("substring");
    else
        printf("not substring");
    return 0;
}   
