#include <stdio.h>
#include <process.h>
#include <stdlib.h>


int top = -1, *stk;
void push();
void pop();
void display();
int n;

void main()
{
    printf("\n Enter the number of element- ");
    scanf("%d", &n);
    stk = (int *)malloc(n * sizeof(int));
    int ch;

    while (1)
    {
        printf("\n***Stack Menu***");
        printf("\n\n1. Push\n2. Pop\n3. Display\n4. Exit");
        printf("\n\nEnter your choice(1-4): ");
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
            exit(0);
        default:
            printf("\nWrong Choice!!");
        }
    }
}
void push()
{
    int val;
    if (top == n - 1)
    {
        printf("\n Stack is full!!");
    }
    else
    {
        for(int i=0;i<n;i++){
        printf("\n Enter element to push!!");
        scanf("%d", &val);
        top = top + 1;
        stk[top] = val;
        }
    }
}
void pop()
{
    if (top == -1)
    {
        printf("\n Stack is empty!!");
    }
    else
    {
        printf("\n Deleted element is %d", stk[top]);
        top = top - 1;
    }
}
void display()
{
    int i;
    if (top == -1)
    {
        printf("\n Stack is empty");
    }
    else
    {
        printf("\n Stack is... \n");
        for (i = top; i >= 0; --i)
        {
            printf("%d\n", stk[i]);
        }
    }
}