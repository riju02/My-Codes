#include <stdio.h>
#include<stdlib.h>

#define max 6
int queue[max]; // array declaration
int front = -1;
int rear = -1;
// function to insert an element in a circular queue
void enqueue(int element)
{
    if (front == -1 && rear == -1) // condition to check queue is empty
    {
        front = 0;
        rear = 0;
        queue[rear] = element;
    }
    else if ((rear + 1) % max == front) // condition to check queue is full
    {
        printf("Queue is overflow..");
    }
    else
    {
        rear = (rear + 1) % max; // rear is incremented
        queue[rear] = element;   // assigning a value to the queue at the rear position.
    }
}

// function to delete the element from the queue
int dequeue()
{
    if ((front == -1) && (rear == -1)) // condition to check queue is empty
    {
        printf("\nQueue is underflow..");
    }
    else if (front == rear)
    {
        printf("\nThe dequeued element is %d", queue[front]);
        front = -1;
        rear = -1;
    }
    else
    {
        printf("\nThe dequeued element is %d", queue[front]);
        front = (front + 1) % max;
    }
}
// function to display the elements of a queue
void display()
{
    int i = front;
    if (front == -1 && rear == -1)
    {
        printf("\n Queue is empty..");
    }
    else
    {
        printf("\nElements in a Queue are :");
        while (i <= rear)
        {
            printf("%d,", queue[i]);
            i = (i + 1) % max;
        }
    }
}
void empty(){
    if (front == -1 && rear == -1)
    {
        printf("\n Queue is empty..");
    }
}
void peek(){
    printf("\n The Peek value is- %d",queue[front]);
}
int main()
{
    int choice = 1, x; // variables declaration

    while (1) // while loop
    {
        printf("\nPress 1: Insert an element");
        printf("\nPress 2: Delete an element");
        printf("\nPress 3: Display the element");
        printf("\nPress 4: Display the peek element");
        printf("\nPress 5: Empty Check");
        printf("\nPress 6: Exit");
        printf("\nEnter your choice");
        scanf("%d", &choice);

        switch (choice)
        {

        case 1:

            printf("Enter the element which is to be inserted");
            scanf("%d", &x);
            enqueue(x);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            peek();
            break;
        case 5:
            empty();
            break;
        case 6:
            exit(1);
            break;
        default:
            printf("\nWrong Choice\n");
        }
    }
    return 0;
}