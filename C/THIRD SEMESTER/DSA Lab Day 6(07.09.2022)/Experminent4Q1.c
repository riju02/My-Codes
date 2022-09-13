#include <stdio.h>

void display(int m, int n, int array[m][n]){
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
}

int take_input(int n, int m, int array[n][m]){
    int counter=0;
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            scanf("%d", &array[i][j]);
            if (array[i][j] == 0)
            {
                ++counter;
            }
        }
    }
    return counter;
}

void sparse(int m, int n, int counter){
    if (counter > ((m * n) / 2))
    {
        printf("The given matrix is sparse matrix \n");
    }
    else
        printf("The given matrix is not a sparse matrix \n");
    printf("There are %d number of zeros", counter);
}

int main()
{
    int m, n;
    printf("Enter the order of the matix \n");
    printf("Enter the number of rows in array: ");
    scanf("%d", &m);
    printf("Enter the number of columns in array: ");
    scanf("%d", &n);
    int counter = 0;

    printf("Enter the elements of the matix: \n");
    int array[m][n];
    counter=take_input(n, m, array);
    printf("\n The Matrix is- \n");
    display(m,n,array);
    sparse(m, n, counter); 
    return 0;
}
