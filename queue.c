#include <stdio.h>
#define SIZE 5

int items[SIZE];
int front = -1, rear = -1;

void enqueue(int value) {
    if (rear == SIZE - 1) {
        printf("\nQueue is Full!!");
    } else {
        if (front == -1)
            front = 0;
        rear++;
        items[rear] = value;
        printf("\nInserted -> %d", value);
    }
}

void dequeue() {
    if (front == -1 || front > rear) {
        printf("\nQueue is Empty!!");
    } else {
        printf("\nDeleted : %d", items[front]);
        front++;
        if (front > rear) { 
            front = -1;
            rear = -1;
        }
    }
}

void display() {
    if (rear == -1) {
        printf("\nQueue is Empty!!!");
    } else {
        printf("\nQueue elements are:\n");
        for (int i = front; i <= rear; i++)
            printf("%d ", items[i]);
    }
    printf("\n");
}

int main() {
    enqueue(1);
    enqueue(2);
    enqueue(3);
    display();
    dequeue();
    display();
    return 0;
}