#include<stdio.h>
 
int main()
{
    int i,n;
    char a[100],b[100],ele;
    printf("\n Enter size of the  array : ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        printf("\n Enter The Character Value Of a[%d]    ",i);
		scanf(" %c",&a[i]);
    }
    for(i=0; i<n; i++)
    {
    	b[i]=a[i];
    	printf("\n The ASCII Value of %c- %d",b[i],b[i]);
	}
	return 0;
}
