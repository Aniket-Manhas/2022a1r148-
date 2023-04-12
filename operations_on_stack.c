/*Q. Implement a Stack using Array and develop functions to perform push and pop operations?
Name      Aniket Manhas
Roll no.  148*/
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int top=-1,stack[SIZE];
void push();
void pop();
void main()
{
    int choice;
    do{
        printf("\nPerform operations on the stack\n");
        printf("1. Push the element in stack\n");
        printf("2. pop element from stack\n");
        printf("Any other number to exit\n");
        printf("Enter the choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            default:
                exit(1);
        }
    }while(choice==1||choice==2);
}
void push()
{
    if (top==SIZE-1)
    {
        printf("\nOverflow\n\n");
    }
    else
    {
        printf("\nEnter the element to be added onto the stack: ");
        top++;
        scanf("%d",&stack[top]);
    }
}
void pop()
{
    if (top == -1)
    {
        printf("\nUnderflow\n\n");
    }
    else
    {
        printf("\nPopped element: %d",stack[top]);
        top=top-1;
    }
}