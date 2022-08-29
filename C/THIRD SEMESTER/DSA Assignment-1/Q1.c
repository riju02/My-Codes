#include <stdio.h>

struct LLNode
{
    int data;
    struct LLNode *next;
};

void insertAtBeginning(struct LLNode **head, int dataToBeInserted)
{
    struct LLNode *curr = new LLNode;
    curr->data = dataToBeInserted;
    curr->next = NULL;
    if (*head == NULL)
        *head = curr; 

    else
    {
        curr->next = *head; 
        *head = curr;
    }
}

void display(struct LLNode **node)
{
    struct LLNode *temp = *node;
    while (temp != NULL)
    {
        if (temp->next != NULL)
            cout << temp->data << "->";
        else
            cout << temp->data;

        temp = temp->next;
    }
    printf(“\n\n”);
}
void swapNodes(struct LLNode **head_ref, int x, int y)
{
    if (x == y)
    {
        return;
    }

    struct LLNode *x_prev = NULL, *x_curr = *head_ref;
    while (x_curr && x_curr->data != x)
    {
        x_prev = x_curr;
        x_curr = x_curr->next;
    }

    struct LLNode *y_prev = NULL, *y_curr = *head_ref;
    while (y_curr && y_curr->data != y)
    {
        y_prev = y_curr;
        y_curr = y_curr->next;
    }
    
    if (x_curr == NULL || y_curr == NULL)
    {
        return;
    }
    
    if (x_prev != NULL)
    {
        x_prev->next = y_curr;
    }
    else
    {
        *head_ref = y_curr;
    }
    if (y_prev != NULL)
        y_prev->next = x_curr;
    else
    {
        *head_ref = x_curr;
    }
    struct LLNode *temp = y_curr->next;
    y_curr->next = x_curr->next;
    x_curr->next = temp;
}

int main()
{
    struct LLNode *head = NULL;
    insertAtBeginning(&head, 9);
    insertAtBeginning(&head, 8);
    insertAtBeginning(&head, 7);
    insertAtBeginning(&head, 6);
    insertAtBeginning(&head, 5);
    insertAtBeginning(&head, 4);
    insertAtBeginning(&head, 3);
    insertAtBeginning(&head, 2);
    insertAtBeginning(&head, 1);

    printf("\n Input linked list is: ");
    display(&head);
    int x = 2, y = 7;
    swapNodes(&head, x, y);

    printf(“output LL after swapping %d",x," and %d”,y  “ is: ";
    display(&head);

return 0;
}
