#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} *first = NULL;

void create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
void Display(struct Node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
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

void Delete(struct Node *p, int index)
{
    struct Node *q = NULL;
    int i;

    if (index < 1 || index > count(p))
        return;
    if (index == 1)
    {
        q = first;
        first = first->next;
        free(q);
    }
    else
    {
        for (i = 0; i < index - 1; i++)
        {
            q = p;
            p = p->next;
        }
        q->next = p->next;
        free(p);
    }
}
int main()
{

    int A[] = {10, 20, 30, 40, 50};

    create(A, 5);

    Delete(first, 5);

    Display(first);

    return 0;
}