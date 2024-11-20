//priority queue
#include <stdio.h>
#define MAX 5

typedef struct{
    int priority;
    int data;
}Element;

Element queue[MAX];
int front = 0;
int rear = 0;

void enqueue(Element element)
{
    if(rear == MAX)
    {
        printf("queue is full");
        return;
    }
    int i;
    for(i=rear-1; i >= front; i++)
    {
        if(queue[i].priority < element.priority)
        {
            queue[i + 1] = queue[i];
        }
        else
        {
            queue[i + 1] = element;
            rear ++;
        }
    }
}

Element dequeue()
{
 if(front == rear)
 {
     printf("queue is empty");
     Element empty;
     return empty;
 }
 Element element = queue[front];
 front ++;
 return element;
}

void display()
{
    int i;
    for(i = front; i<rear; i++)
    {
        printf("Data: %d, priority: %d\n", queue[i].data, queue[i].priority);
    }
}

int main()
{
    Element element1 = {1, 3};
    Element element2 = {2, 1};
    Element element3 = {3, 2};
    Element element4 = {4, 4};
    Element element5 = {5, 5};

    enqueue(element1);
    enqueue(element2);
    enqueue(element3);
    enqueue(element4);
    enqueue(element5);

    display();

    Element dequeued = dequeue();
    printf("Dequeued: Data: %d, Priority: %d\n", dequeued.data, dequeued.priority);

    display();

    return 0;
    
}
