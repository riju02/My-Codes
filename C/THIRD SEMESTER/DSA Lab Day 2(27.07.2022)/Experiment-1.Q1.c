//WAP to find out the smallest and largest element stored in an array of n integers.

#include<stdio.h>
#include<conio.h>

int main(){
    int n_035;
    printf("\n Enter The Range of Array- ");
    scanf("%d",&n_035);
    int a[n_035],i;
    for(i=0;i<n_035;i++){
        printf("\n Enter The Element %d in Array- ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\n The Array Elements are- ");
    for(i=0;i<n_035;i++)
	{
    	printf("%d",a[i]);
	}
	int b = a[0],c=a[0];
    for (i = 0; i < n_035; i++)
    {
        if (a[i] > b)
        {
            b = a[i];
        }
        if(a[i]<c)
        {
            c=a[i];
        }
    }
    printf("\n The Largest Element is- %d",b);
    printf("\n The Smallest Elemet is- %d",c);
    return 0;
}
