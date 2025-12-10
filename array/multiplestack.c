#include <stdio.h>
#define SIZE 10

int arr[SIZE];
int top1 = -1;
int top2 = SIZE;

void push1(int x) {
    if (top1 + 1 == top2) {
        printf("Stack1 Overflow\n");
        return;
    }
    arr[++top1] = x;
}

void push2(int x) {
    if (top2 - 1 == top1) {
        printf("Stack2 Overflow\n");
        return;
    }
    arr[--top2] = x;
}

void pop1() {
    if (top1 == -1) {
        printf("Stack1 Underflow\n");
        return;
    }
    printf("Popped from Stack1: %d\n", arr[top1--]);
}

void pop2() {
    if (top2 == SIZE) {
        printf("Stack2 Underflow\n");
        return;
    }
    printf("Popped from Stack2: %d\n", arr[top2++]);
}

void display() {
    int i;
    printf("Stack1: ");
    for (i = 0; i <= top1; i++) printf("%d ", arr[i]);
    printf("\n");

    printf("Stack2: ");
    for (i = SIZE - 1; i >= top2; i--) printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    push1(10);
    push1(20);
    push2(50);
    push2(60);
    display();
    pop1();
    pop2();
    display();
    return 0;
}
