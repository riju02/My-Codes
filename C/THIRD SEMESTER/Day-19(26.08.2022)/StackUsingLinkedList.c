#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Node{
    int info;
    struct node *next;
}*top;
int n;
void push();
void pop();
void display();

int main(){
    printf("\n Enter the number of entry you want to enter- ");
    scanf("%d", &n);
    
    int ch;
    int value;

    while (1)
    {
        printf("\n***Stack Menu***");
        printf("\n\n1. Push\n2. Pop\n3. Display\n4. Exit");
        printf("\n\nEnter your choice(1-4): ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter the value to be insert: ");
            scanf("%d", &value);
            push(int value);
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

void push(int value){
    int data;
    
    scanf("%d", &data);
    if(top==NULL){
        top=(struct node*)malloc(*sizeof(structnode));
        top->next=NULL;
        top->info=data;
    }else{
        struct node*temp=(struct node*)malloc(*sizeof(struct node));
        temp->next=top;
        temp->info=data;
        top=temp;
    }
}
void pop(){
    struct node*tempTop=top;
    if(tempTop==NULL){
        printf("\n Error");
        return;
    }else{
        tempTop=tempTop->next;
    }

    printf("\n Popped Value: %d",top->info);
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