#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

void enqueue(int value)
{
    if(rear == MAX -1)
    {
        printf("queue overflow");
    }
    else
    {
        if(front == -1)front = 0;
        rear ++;
        queue[rear] = value;
        printf("Element inserted is %d", value);
    }
}

void dequeue()
{
    if(front == -1 || front > rear)
    {
        printf("queue underflow");
    }
    else
    {
        printf("element deleted is: \n", queue[front]);
        front ++;
    }
}

void display()
{
    if(front == -1 || front > rear)
    {
        printf("queue underflow");
    }
    else
    {
        printf("elements of the queue are \n");
        for(int i = front; i<=rear; i++)
        {
            printf("%d", queue[i]);
        }
        printf("\n");
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
            enqueue(value);
            break;
        case 2:
            dequeue();
            break;

        case 3:
            display();
            break;

        case 4:
            return 0; // Exit the program

        default:
            printf("Wrong selection! Please choose a valid option.\n");
        }
    }
        
    }
