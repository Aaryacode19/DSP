#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

void enqueue(int value)
{
    if((rear+1) % MAX == front)
    {
        printf("queue is full");
    }
    else
    {
        if(front == -1)front = 0;
        rear = (rear + 1) % MAX;
        queue[rear] = value;
        printf("Insertion done");
    }
}

void dequeue()
{
    if(front == -1)
    {
        printf("queue underfow");
    }
    else
    {
        printf("element removed from queue", queue[front]);
        if(front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front = (front + 1) % MAX;
        }
    }
}

void display()
{
    if(front == -1)
    {
        printf("queue underflow");
    }
    else
    {
        printf("queue elements are: ");
        int i = front;
        while(1)
        {
            printf("%d", queue[i]);
            if(i == rear)break;
            i = (i + 1) % MAX;
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
