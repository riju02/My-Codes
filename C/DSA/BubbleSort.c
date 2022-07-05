#include <stdio.h>
int main()
{
int a[50], n, i, j, t;
printf("\n Please Enter The Number Of Elements You Want In The Array: ");
scanf("%d", &n);
for(i = 0; i < n; i++)
{
printf("\n Please Enter The Value Of Element %d: ",i);

scanf("%d", &a[i]);
}
for(i = 0; i < n - 1; i++)
{
for(j = 0; j < n - i - 1; j++)

{
if(a[j] > a[j + 1])
{
t = a[j];
a[j] = a[j + 1];
a[j + 1] = t;
}
}
}
printf("\n Array after implementing bubble sort: ");
for(i = 0; i < n; i++)
{
printf("%d ", a[i]);
}
}