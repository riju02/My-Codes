#include <stdio.h>
#include <process.h>
#include <stdlib.h>

#define MAX 50

int top = -1,stk[MAX];
void push();
void pop();
void display();
void empty();
void full();

void main()
{
    int ch;

    while (1)
    {
        printf("\n***Stack Menu***");
        printf("\n\n1. Push\n2. Pop\n3. Display\n4. Empty Stack Check\n5. Stack Full Check\n6. Exit");
        printf("\n\nEnter your choice(1-6): ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            empty();
            break;
        case 5:
            full();
            break;
        case 6:
            exit(0);
        default:
            printf("\nWrong Choice!!");
        }
    }
}
void push()
{
    int val;
    if (top == MAX - 1)
    {
        printf("\n Stack is full!!");
    }
    else{
        printf("\n Enter element to push!!");
        scanf("%d", &val);
        top = top + 1;
        stk[top] = val;
    }
}
void pop()
{
    if (top == -1)
    {
        printf("\n Stack is empty!!");
    }
    else{
        printf("\n Deleted element is %d", stk[top]);
        top = top - 1;
    }
}
void empty()
{
    if (top == -1)
    {
        printf("\n Stack is empty!!");
    }
}
void full()
{
    if (top == MAX - 1)
    {
        printf("\n Stack is full!!");
    }
}
void display()
{
    int i;
    if (top == -1)
    {
        printf("\n Stack is empty!!");
    }
    else{
        printf("\n Stack is... \n");
        for (i = top; i >= 0; --i)
        {
            printf("%d\n", stk[i]);
        }
    }
}