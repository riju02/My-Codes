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

int max(struct Node *p)
{
    int m = -32768;
    while (p)
    {
        if (p->Data > m)
            m = p->Data;
        p = p->next;
    }
    return m;
}

int main()
{
    int A[] = {2, 4, 6, 8, 10, 12, 14};

    create(A, 7);

    printf("Max value is %d\n", max(first));

    return 0;
}