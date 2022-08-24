#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    struct Node *next;
    int value;
} Node;

Node *head = NULL, *tail = NULL;

Node *create(int value);

void showMenu();
void inputElements();
void isEmpty();
void display();
void displayReversed();
void insertAtBeginning(int value);
void insertAtEnd(int value);
void insertAfter(int pos, int value);
void deleteAtBeginning();
void deleteAtEnd();
void deleteAfter(int pos);
void insert();
void delete ();
void search();
int searchValue(int value);
void destroy();
void countNodes();
void reverse();

int main()
{
    int c;
    int flag = 1;
    while (flag)
    {
        showMenu();
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            inputElements();
            break;
        case 2:
            display();
            break;
        case 3:
            insert();
            break;
        case 4:
            delete ();
            break;
        case 5:
            search();
            break;
        case 6:
            isEmpty();
            break;
        case 7:
            reverse();
            break;
        case 8:
            countNodes();
            break;
        case 9:
            flag = 0;
            break;
        default:
            printf("Invalid input!.");
        }
    }
    destroy();
    return 0;
}

Node *create(int value)
{
    Node *n = malloc(sizeof(Node));
    n->value = value;
    n->next = NULL;
    return n;
}

void showMenu()
{
    printf("\nWhat do you want to do?\n");
    printf("1> Input the elements of the linked list\n");
    printf("2> Display the elements.\n");
    printf("3> Insert an element\n");
    printf("4> Delete an element\n");
    printf("5> Search an element\n");
    printf("6> Check if it is empty.\n");
    printf("7> Reverse the list.\n");
    printf("8> Count the number of elements.\n");
    printf("9> Exit\n");
}

void inputElements()
{

    printf("\n");
    printf("Inside inputElements function.");
    printf("\n");

    int num;
    printf("Enter the number of elements you want to store?\n");
    scanf("%d", &num);
    printf("Enter the values: ");
    for (int i = 0; i < num; i++)
    {
        int value;
        scanf("%d", &value);
        if (i == 0)
        {
            head = create(value);
            tail = head;
        }
        else
        {
            Node *t = create(value);
            tail->next = t;
            tail = tail->next;
        }
    }
}

void isEmpty()
{
    if (head == NULL)
        printf("The list is empty.\n");
    else
        printf("The list is not empty.\n");
}

void display()
{
    printf("\n");
    printf("Inside display function.");
    printf("\n");
    printf("\n================\n");
    Node *n = head;
    if (n == NULL)
    {
        printf("Your list is empty!");
        return;
    }
    while (n != NULL)
    {
        printf("%d\t", n->value);
        n = n->next;
    }
    printf("\n================\n");
}

void insertAtBeginning(int value)
{
    Node *n = create(value);
    n->next = head;
    head = n;
}

void insertAtEnd(int value)
{
    Node *n = create(value);
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = n;
    tail = n;
}

void insertAfter(int pos, int value)
{
    Node *n = create(value);
    Node *t = head;
    int c = 0;
    while (t != NULL)
    {
        if (c == pos)
            break;
        c++;
        t = t->next;
    }
    if (c == pos)
    {
        Node *x = t->next;
        t->next = n;
        n->next = x;
    }
}

void deleteAtBeginning()
{
    Node *n = head;
    head = head->next;
    free(n);
}

void deleteAtEnd()
{
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    free(tmp->next);
    tmp->next = NULL;
    tail = tmp;
}

void deleteAfter(int pos)
{
    Node *t = head, *tmp;
    int c = 0;
    while (t != NULL)
    {
        if (c == pos)
            break;
        c++;
        t = t->next;
    }
    if (c == pos)
    {
        tmp = t->next;
        t->next = tmp->next;
        free(tmp);
    }
}

void insert()
{

    printf("\n");
    printf("Inside insert function.");
    printf("\n");

    int c;
    int value, index;
    printf("What do you want to do?\n");
    printf("1> Insert at the beginning\n");
    printf("2> Insert at the end\n");
    printf("3> Insert after some index.\n");
    printf("4> Insert before some index.\n");
    scanf("%d", &c);
    switch (c)
    {
    case 1:
        printf("Enter the value of the node: ");
        scanf("%d", &value);
        insertAtBeginning(value);
        break;
    case 2:
        printf("Enter the value of the node: ");
        scanf("%d", &value);
        insertAtEnd(value);
        break;
    case 3:
        printf("Enter the value of the node: ");
        scanf("%d", &value);
        printf("Enter the index: ");
        scanf("%d", &index);
        insertAfter(index, value);
        break;
    case 4:
        printf("Enter the value of the node: ");
        scanf("%d", &value);
        printf("Enter the index: ");
        scanf("%d", &index);
        insertAfter(index - 1, value);
        break;
    default:
        printf("Invalid choice.");
        break;
    }
}

void delete ()
{

    printf("\n");
    printf("Inside delete function.");
    printf("\n");

    int c;
    int index, key;
    printf("What do you want to do?\n");
    printf("1> Delete at the beginning\n");
    printf("2> Delete at the end\n");
    printf("3> Delete after some index.\n");
    printf("4> Delete before some index.\n");
    printf("5> Delete an element with a key.\n");
    scanf("%d", &c);
    switch (c)
    {
    case 1:
        deleteAtBeginning();
        break;
    case 2:
        deleteAtEnd();
        break;
    case 3:
        printf("Enter the index: ");
        scanf("%d", &index);
        deleteAfter(index);
        break;
    case 4:
        printf("Enter the index: ");
        scanf("%d", &index);
        deleteAfter(index - 1);
        break;
    case 5:
        printf("Enter the key: ");
        scanf("%d", &key);
        deleteAfter(searchValue(key) - 1);
        break;

    default:
        printf("Invalid choice.");
        break;
    }
}

void search()
{
    int value;
    printf("\n");
    printf("Inside search function.");
    printf("\n");
    printf("\n================\n");
    printf("Enter the value to be searched: ");
    scanf("%d", &value);
    int index = searchValue(value);
    if (index != -1)
        printf("The element was found at %d", index + 1);
    else
        printf("The element was not found.");
}

int searchValue(int value)
{
    int count = -1;
    Node *n = head;
    while (n != NULL)
    {
        count++;
        if (n->value == value)
            break;
        n = n->next;
    }
    return count;
}

void destroy()
{
    Node *n = head, *nxt;
    while (n != NULL)
    {
        nxt = n->next;
        free(n);
        n = nxt;
    }
}

void reverse()
{
    Node *n = head;

    Node *prev = NULL;

    Node *next;
    tail = head;
    while (n != NULL)
    {
        next = n->next;
        n->next = prev;
        prev = n;
        n = next;
    }
    head = prev;
}

void countNodes()
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    printf("\n\nThe number of nodes are %d\n", count);
}