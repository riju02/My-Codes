#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *f = NULL;
struct node *r = NULL;
void enqueue(int d) // Insert elements in Queue
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = d;
    n->next = NULL;
    if ((r == NULL) && (f == NULL))
    {
        f = r = n;
        r->next = f;
    }
    else
    {
        r->next = n;
        r = n;
        n->next = f;
    }
}
void dequeue() // Delete an element from Queue
{
    struct node *t;
    t = f;
    if ((f == NULL) && (r == NULL))
        printf("\nQueue is Empty");
    else if (f == r)
    {
        f = r = NULL;
        free(t);
    }
    else
    {
        f = f->next;
        r->next = f;
        free(t);
    }
}
void print()
{ // Print the elements of Queue
    struct node *t;
    t = f;
    if ((f == NULL) && (r == NULL))
        printf("\nQueue is Empty");
    else
    {
        do
        {
            printf("\n%d", t->data);
            t = t->next;
        } while (t != f);
    }
}
void empty(){
    struct node *t;
    t = f;
    if ((f == NULL) && (r == NULL))
        printf("\nQueue is Empty");
}
void peek(){
    struct node *t;
    t = f;
    printf("Peek value- %d",t->data);
}
int main()
{
    int opt, n, i, data;
    printf("Enter Your Choice:-");
    do
    {
        printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Peek\n5.Empty\n0.Exit\n");
        scanf("%d", &opt);
        switch (opt)
        {
        case 1:
            printf("\nEnter the number of data");
            scanf("%d", &n);
            printf("\nEnter your data");
            i = 0;
            while (i < n)
            {
                scanf("%d", &data);
                enqueue(data);
                i++;
            }
            break;
        case 2:
            print();
            break;
        case 3:
            dequeue();
            break;
        case 4:
            peek();
            break;
        case 5:
            empty();
            break;
        case 0:
            break;
        default:
            printf("\nIncorrect Choice");
        }
    } while (opt != 0);
    return 0;
}