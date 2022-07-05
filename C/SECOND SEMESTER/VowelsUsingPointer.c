#include <stdio.h>
int main()
{
    char a[100];
    char *p;
    int  vCount=0,cCount=0,i,n,k;

    printf("Enter The Range: \n");
    scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter The Value of %d- ",i);
		scanf(" %c", &a[i]);
	}
    
    p=a;
    while(*p!='\0')
    {
        if(*p=='A' ||*p=='E' ||*p=='I' ||*p=='O' ||*p=='U'
        		||*p=='a' ||*p=='e' ||*p=='i' ||*p=='o' ||*p=='u')
            vCount++;
        else
            cCount++;
        p++;
    }

    printf("Number of Vowels in Array: %d\n",vCount);
    while(*p!='\0')
    {
        if(*p=='A' ||*p=='E' ||*p=='I' ||*p=='O' ||*p=='U'||*p=='a' ||*p=='e' ||*p=='i' ||*p=='o' ||*p=='u')
        {
            printf("\n The Position of %c- %d",*p,&*p);
            p++;
    	}
    	else
    	p++;
    }
    return 0;
}
