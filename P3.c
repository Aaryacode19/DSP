#include <stdio.h>
#include<stdlib.h>
#define SIZE 10

int stack[SIZE];
int top = -1;

void push(int value)
{
    if (top == SIZE - 1)
    {
        printf("Stack overflow. No more elements can be added.\n");
    }
    else
    {
        top++;
        stack[top] = value;
        printf("New element inserted inside the stack is: %d\n", value);
    }
}

void pop()
{
    if (top == -1)
    {
        printf("Stack underflow. No elements inside the stack.\n");
    }
    else
    {
        printf("Element deleted from the stack is: %d\n", stack[top]);
        top--;
    }
}

void display()
{
    if (top == -1)
    {
        printf("Stack underflow. No elements inside the stack.\n");
    }
    else
    {
        printf("Elements inside the stack are as follows:\n");
        for (int i = top; i >= 0; i--)
        {
            printf("%d", stack[i]);
        }
    }
}

int main()
{
    int choice, value;
    while (1)
    {
        printf("\n\nMENU\n");
        printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
    
        switch (choice)
        {
        case 1:
            printf("Enter element to be inserted: ");
            scanf("%d", &value);
            push(value);
            break;
        case 2:
            pop();
            break;

        case 3:
            display();
            break;

        case 4:
            //return 0; // Exit the program
            exit(0);

        default:
            printf("Wrong selection! Please choose a valid option.\n");
        }
    }
        
    }
