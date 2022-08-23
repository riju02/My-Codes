#include <stdio.h>
#include <stdlib.h>

struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
};

struct Node *first = NULL;

void create(int A[], int n)
{
    struct Node *t, *last;
    int i;

    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->prev = first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = last->next;
        t->prev = last;
        last->next = t;
        last = t;
    }
}

void Display(struct Node *p)
{
    while (p)
    {
        printf("%d\n", p->data);
        p = p->next;
    }
}

int Length(struct Node *p)
{
    int len = 0;
    while (p)
    {
        len++;
        p = p->next;
    }
    return len;
}

void delete (struct Node *p, int index)
{
    struct Node *q;
    int i;
    if (index < 1 || index > Length(p))
        return;
    if (index == 1)
    {
        first = first->next;
        if (first)
            first->prev = NULL;

        free(p);
    }
    else
    {
        for (i = 0; i < index - 1; i++)
        {
            p = p->next;
        }

        p->prev->next = p->next;
        if (p->next)
            p->next->prev = p->prev;

        free(p);
    }
}

int main()
{
    int A[] = {10, 20, 30, 40, 50};
    create(A, 5);

    delete (first, 0);

    printf("\nLength is :%d\n", Length(first));
    Display(first);

    return 0;
}