#include <stdio.h>
#include <stdlib.h>
void selection_sort(int *, int);
void larg_ocr(int *, int);
void print_array(int *, int);
void most_sig(int *arr, int n_035);

int main()
{
    printf("Enter array size: ");
    int n_035,*l,*s;
    scanf("%d", &n_035); 

    int *arr_dyn = (int *)malloc(n_035 * sizeof(int)); 
    for (int i = 0; i < n_035; i++)
    { 
        printf("Enter array element: ");
        scanf("%d", &arr_dyn[i]);
    }

    selection_sort(arr_dyn, n_035);
    printf("\n The Ascending Sorted Array- ");
    print_array(arr_dyn,n_035);
    larg_ocr(arr_dyn, n_035);

    most_sig(arr_dyn, n_035); 
    l=&arr_dyn[n_035-1];
    s=&arr_dyn[0];
    printf("\n The Memory Location of Largest Element %d is- %d",*l,l);
    printf("\n The Memory Location of Smallest Element %d is- %d",*s,s);
    return 0;
}

void selection_sort(int *arr, int n_035)
{
    int loc,temp,i;
    for(i = 0; i < n_035 - 1; i++)
    {
        int min = arr[i];
        int loc = i;
        for (int j = i + 1; j < n_035; j++)
        {
            if (min > arr[j])
            {
                min = arr[j];
                loc = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[loc];
        arr[loc] = temp;
    }
}

void most_sig(int *arr, int n_035)
{
    int max_count = 1;
    int max_el;
    int count_max_el_update = 0;

    for (int i = 0; i < n_035; i++)
    {
        int count = 1;
        for (int j = i + 1; j < n_035; j++){
            if (arr[i] == arr[j])
                count++;
            else
                break;
        }
        if (count > max_count)
        {
            max_count = count;
            max_el = arr[i];
            count_max_el_update++;
        }
    }
    if (count_max_el_update)
        printf("\n Most significant element (%d) apperared %d times", max_el, max_count);
    else
        printf("\n All elements occurs for the same time.");
}

void larg_ocr(int *arr, int n_035)
{
    int max_count = 1;
    for (int i = 0; i < n_035 - 1; i++)
    {
        int count = 0;
        for (int j = i + 1; j < n_035; j++)
        {
            if (arr[j] == arr[n_035-1])
                count++;
            else
                break;
        }
        if(count>max_count){
            max_count=count;
        }
    }
    printf("\n Largest Element %d occurs %d times", arr[n_035-1], max_count);
}

void print_array(int *arr, int n_035)
{
    for (int i = 0; i < n_035; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}