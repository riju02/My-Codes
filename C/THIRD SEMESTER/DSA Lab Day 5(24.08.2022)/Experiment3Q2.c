#include <stdio.h>
#include <stdlib.h>

struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
} *first = NULL;

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

void traverse(struct Node *p)
{
    while (p)
    {
        printf("%d\n", p->data);
        p = p->next;
    }
}

void revtrav(struct Node *p)
{
    int l = 0;
    while (p)
    {
        l++;
        if (p->next == NULL)
        {
            break;
        }
        p = p->next;
    }
    while (l-- != 0)
    {
        printf("%d ", p->data);
        p = p->prev;
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

void isempty(struct Node *p)
{
    if (first == NULL)
    {
        printf("EMPTY LIST\n");
        return;
    }
    printf("LIST IS NOT EMPTY\n");
}

void insert(struct Node *p, int index, int x)
{
    struct Node *t;
    int i;
    if (index < 0 || index > Length(p))
        return;
    if (index == 0)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = x;
        t->data = x;
        t->prev = NULL;
        t->next = first;
        first->prev = t;
        first = t;
    }
    else
    {
        for (i = 0; i < index - 1; i++)
        {
            p = p->next;
        }
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = x;
        t->prev = p;
        t->next = p->next;
        if (p->next)
            p->next->prev = t;
        p->next = t;
    }
}

rremove(struct Node *p, int index)
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

void reverse(struct Node **p)
{
    struct Node *temp = NULL;
    struct Node *current = *p;
    while (current != NULL)
    {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }
    if (temp != NULL)
        *p = temp->prev;
}

int search(struct Node *p, int selt)
{
    int i = 0;
    while (p)
    {
        if (p->data == selt)
        {
            return i;
        }
        i++;
        p = p->next;
    }
    return -1;
}

int main()
{
    isempty(first);
    int A[] = {10, 30, 50, 70, 90};
    create(A, 5);
    printf("After allocating elements:\n");
    isempty(first);
    printf("\nLength is :%d\n", Length(first));
    printf("Elements are:\n");
    traverse(first);
    printf("Elements in rev order are:\n");
    revtrav(first);
    insert(first, 0, 25);
    printf("After Insertion of elements:\n");
    printf("\nLength is :%d\n", Length(first));
    traverse(first);
    rremove(first, 1);
    printf("After Deletion of elements:\n");
    printf("\nLength is :%d\n", Length(first));
    traverse(first);
    reverse(&first);
    printf("After reversing, elements:\n");
    traverse(first);
    printf("Position of 30 in given list: %d\n", search(first, 30));
    return 0;
}