#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAX 50
int que[MAX];
int rear = -1;
int front = -1;
void enqueue();
void dequeue();
void show();
void isempty();
void peek();

int main()
{
    int ch;
    while (1)
    {
        printf("\n 1. Insert element to queue\n");
        printf("2. Delete element from queue\n");
        printf("3. Display all element in queue\n");
        printf("4. Peek Function\n");
        printf("5. Empty Check\n");
        printf("6. Exit \n");
        printf("Enter Your Choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            show();
            break;
        case 4:
            peek();
            break;
        case 5:
                isempty();
                break;
        case 6:
            exit(0);
        default:
            printf("Wrong Choice!!\n");
        }
    }
}
void peek()
{
    printf("The Peek value is- %d",que[front]);
    return;
}
void isempty()
{
    if (front == -1 || front > rear)
    {
        printf("\n Queue Underflow!!");
        return;
    }
}
void enqueue()
{
    int add;
    if (rear == MAX - 1)
    {
        printf("Queue Overflow \n");
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
        printf("\n Insert the element in queue: ");
        scanf("%d", &add);
        rear = rear + 1;
        que[rear] = add;
    }
}
void dequeue()
{
    if (front == -1 || front > rear)
    {
        printf("\n Queue Underflow!!");
        return;
    }
    else
    {
        printf("\n Element deleted from queue is: %d", que[front]);
        front = front + 1;
    }
}
void show()
{
    int i;
    if (front == -1)
    {
        printf("\n Queue is empty!!");
    }
    else
    {
        printf("\n Queue is: \n");
        for (i = front; i <= rear; i++)
        {
            printf("\n %d", que[i]);
        }
        printf("\n");
    }
}