#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int Data;
    struct Node *next;
} *first = NULL;

void create(int A[], int n)
{
    int i;
    struct Node *temp, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->Data = A[0];
    first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        temp = (struct Node *)malloc(sizeof(struct Node));
        temp->Data = A[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
}

int count(struct Node *p)
{
    int l = 0;
    while (p != NULL)
    {
        l++;
        p = p->next;
    }
    return l;
}

int main()
{
    int A[] = {2, 4, 6, 8, 10, 12, 14};

    create(A, 7);

    printf("Length is %d\n", count(first));

    return 0;
}