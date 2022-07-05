#include <stdio.h>

int main()
{
  int c, first, last, middle, n, search, a[100];
  printf("Enter number of elements\n");
  scanf("%d", &n);
  for (c = 0; c < n; c++)
  {
  	printf("Enter %d integers\n", c);
    scanf("%d", &a[c]);
  }
  printf("Enter value to find\n");
  scanf("%d", &search);
  first = 0;
  last = n - 1;
  middle = (first+last)/2;
  while (first <= last) 
  {
    if (a[middle] < search)
    {
      first = middle + 1;
	}
    else if (a[middle] == search) 
	{
      printf("%d found at location %d.\n", search, middle+1);
      break;
    }
    else
    {
      last = middle - 1;
	}
    middle = (first + last)/2;
  }
  if (first > last)
  {
    printf("Not found! %d isn't present in the list.\n", search);
  }
  return 0;
}
