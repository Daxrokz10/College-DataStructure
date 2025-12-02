#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100 

int stack[MAX_SIZE]; 
int top = -1;       

int isEmpty() {
    return (top == -1);
}


int isFull() {
    return (top == MAX_SIZE - 1);
}


void push(int data) {
    if (isFull()) {
        printf("Stack Overflow: Cannot push %d, stack is full.\n", data);
        return;
    }
    stack[++top] = data;
    printf("Pushed %d onto the stack.\n", data);
}

int pop() {
    if (isEmpty()) {
        printf("Stack Underflow: Cannot pop, stack is empty.\n");
        return -1; 
    }
    int data = stack[top--];
    printf("Popped %d from the stack.\n", data);
    return data;
}

int peek() {
    if (isEmpty()) {
        printf("Stack is empty, no element to peek.\n");
        return -1; 
    }
    return stack[top];
}

void display() {
    if (isEmpty()) {
        printf("Stack is empty.\n");
        return;
    }
    printf("Stack elements: ");
    for (int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() {
    push(10);
    push(20);
    push(30);
    display();

    printf("Top element: %d\n", peek());

    pop();
    display();

    push(40);
    display();

    return 0;
}