#include <stdio.h>
#define size 5

int queue[size];
int front = -1, rear = -1;

int isEmpty()
{
    return front == -1;
};

int isFull()
{
    return rear == size - 1;
};

void enqueue(int data)
{
    if (isFull())
    {
        printf("Queue is full\n");
        return;
    }
    if (isEmpty())
    {
        front++;
    }

    queue[++rear] = data;
    printf("%d inserted into queue\n", data);
    return;
};

void dequeue()
{
    if (isEmpty())
    {
        printf("Queue is empty\n");
        return;
    }
    printf("\n%d dequeued \n", queue[front]);
    queue[front++];
    return;
}

void peek()
{
    if (isEmpty()){
        printf("Queue is empty\n");
        return;
    }
    printf("\nelement in front is: %d",queue[front]);
}

void display()
{
    if (isEmpty())
    {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue: \n");
    for (int i = front; i <= rear; i++)
    {
        printf("%d ", queue[i]);
    }
};

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    display();
    peek();
}
