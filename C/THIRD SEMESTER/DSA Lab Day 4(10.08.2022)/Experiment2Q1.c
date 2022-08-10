#include <stdio.h>
#include <stdlib.h>
void bubble_sort(int *, int);
void print_array(int *, int);
void most_sig(int *arr, int n_035);

int main()
{
    printf("Enter array size: ");
    int n_035;
    scanf("%d", &n_035); 

    int *arr_dyn = (int *)malloc(n_035 * sizeof(int)); 

    for (int i = 0; i < n_035; i++)
    { 
        printf("Enter array element: ");
        scanf("%d", &arr_dyn[i]);
    }
    printf("\n Possible Combination of Bubble Sort- \n");
    bubble_sort(arr_dyn, n_035);                        
    printf("\n Smallest number:%d \n\n", arr_dyn[n_035 - 1]); 
    most_sig(arr_dyn, n_035); 
    printf("\n The Descending Sorted Array- ");
    print_array(arr_dyn,n_035);

    return 0;
}


void bubble_sort(int *arr, int n_035)
{
    for (int i = 0; i < n_035; i++)
    {                        
        print_array(arr, n_035); 
        for (int j = 0; j < n_035 - i - 1; j++)
        { 
            if (arr[j] < arr[j + 1])
            {                      
                int temp = arr[j]; 
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void most_sig(int *arr, int n_035)
{
    int max_count = 1;
    int max_el;
    int count_max_el_update = 0;

    for (int i = 0; i < n_035 - 1; i++)
    {
        int count = 1;
        for (int j = i + 1; j < n_035; j++)
        {
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
        printf("Most significant element (%d) apperared %d times", max_el, max_count);
    else
        printf("All elements occurs for the same time.");
}

void print_array(int *arr, int n_035)
{
    for (int i = 0; i < n_035; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}