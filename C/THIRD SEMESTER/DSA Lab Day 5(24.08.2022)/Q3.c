#include <stdio.h>
#include <conio.h>
#include <malloc.h>

struct node
{
    struct node *next;
    int data;
    struct node *prev;
};

struct node *start = NULL;
struct node *create(struct node *start)
{
    struct node *new_node, *ptr;
    int num;
    printf("\n Enter -1 to end");
    printf("\n Enter the data :");
    scanf("%d", &num);
    while (num != -1)
    {
        if (start == NULL)
        {
            new_node = (struct node *)malloc(sizeof(struct node));
            new_node->prev = NULL;
            new_node->data = num;
            new_node->next = start;
            start = new_node;
        }
        else
        {
            new_node = (struct node *)malloc(sizeof(struct node));
            new_node->data = num;
            ptr = start;
            while (ptr->next != start)
                ptr = ptr->next;
            new_node->prev = ptr;
            ptr->next = new_node;
            new_node->next = start;
            start->prev = new_node;
        }
        printf("\n Enter the date :");
        scanf("%d", &num);
    }
    return start;
}

struct node *display(struct node *start)
{
    struct node *ptr;
    ptr = start;
    while (ptr->next != start)
    {
        printf("\t %d", ptr->data);
        ptr = ptr->next;
    }
    printf("\t %d", ptr->data);
    return start;
}

int main()
{
    int option;
    do
    {
        printf("\n\n **MAIN MENU **");
        printf("\n 1: Create a list");
        printf("\n 2: Display the list");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            start = create(start);
            printf("\n CIRCULAR DOUBLY LINK LIST CREATED");
            break;
        case 2:
            start = display(start);
            break;
        }
    } while (option != 2);
    getch();
}