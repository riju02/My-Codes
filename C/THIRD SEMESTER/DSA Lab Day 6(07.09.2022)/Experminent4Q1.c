#include <stdio.h>

int main()
{
    int m, n;
    printf("Enter the order of the matix \n");
    printf("Enter the number of rows in array: ");
    scanf("%d", &m);
    printf("Enter the number of columns in array: ");
    scanf("%d", &n);
    int counter = 0;

    printf("Enter the co-efficients of the matix: \n");
    int array[m][n];
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

    if (counter > ((m * n) / 2))
    {
        printf("The given matrix is sparse matrix \n");
    }
    else
        printf("The given matrix is not a sparse matrix \n");
    printf("There are %d number of zeros", counter);
}
