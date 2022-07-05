#include<stdio.h>
 
int main()
{
    int i,n;
    char a[100],ele;
    printf("\n Enter size of the  array : ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        printf("\n Enter The Value Of a[%d]    ",i);
		scanf(" %c",&a[i]);
    }
    printf("\n Enter the element you want to find: ");
    scanf(" %c", &ele);
    for(i=0; i<n; i++)
    {
        if(a[i]==ele)
        {
			printf("\n The %c element found ",ele);
            return 0;		 
        }
    }
	printf("\n The %c element  not  found",ele);
	return 0;
}
