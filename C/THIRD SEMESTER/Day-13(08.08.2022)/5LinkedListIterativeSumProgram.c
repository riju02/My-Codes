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

int sum(struct Node *p)
{
    int s = 0;
    while (p != NULL)
    {
        s = s + p->Data;
        p = p->next;
    }
    return s;
}

int main()
{
    int A[] = {2, 4, 6, 8, 10, 12, 14};

    create(A, 7);

    printf("Sum is %d\n", sum(first));

    return 0;
}