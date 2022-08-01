#include <stdio.h>

int bubble_sort(int LA[], int N)
{
    int k,ptr,temp;
    for (k=0;k<=(N-1)-1;k++)
    {
        ptr=0;
        while(ptr<=(N-k-1)-1)
        {
            if (LA[ptr]>LA[ptr+1])
            {
                temp=LA[ptr];
                LA[ptr]=LA[ptr+1];
                LA[ptr+1]=temp;
            }
        ptr=ptr+1;
        }
    }
   
    return 0;
}


int main()
{
    int array[15]={21,2,43,14,5,46,87,8,112,235,5,6,1};
    int N=13; /*length of the array*/
    int i;
   
    bubble_sort(array,N);
   
    for(i=0;i<N;i++)
    {
        printf("%d ", array[i]);
    }
   
    return 0;
}