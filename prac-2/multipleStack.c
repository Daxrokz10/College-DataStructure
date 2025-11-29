#include<stdio.h>
#include<stdlib.h>
#define max 5

int stack[max];
int top1 = -1;
int top2 = max;

int isFull(){
    return top1 + 1 == top2;
};
int isEmpty1(){
    return top1 == -1;
};
int isEmpty2(){
    return top2 == max;
};

void push1(int data){
    if(isFull()){
        printf("Stack is full \n");
        return;
    }
    stack[++top1] = data;
    printf("%d pushed",stack[top1]);
}

void push2(int data){
    if(isFull()){
        printf("Stack is full \n");
        return;
    }
    stack[--top2] = data;
    printf("%d pushed",stack[top2]);
}

void pop1(){
    if(isEmpty1()){
        printf("Stack is empty \n");
        return;
    }
    printf("%d popped",stack[top1]);
    stack[top1--];
    return;
}
void pop2(){
    if(isEmpty2()){
        printf("Stack is empty \n");
        return;
    }
    printf("%d popped",stack[top2]);
    stack[top2++];
    return;
}

void display() {
    printf("\nStack 1:\n");
    if(isEmpty1()){
        printf("Stack 1 is empty \n");
    }
    for(int i = 0;i<=top1;i++){
        printf("%d ",stack[i]);
    }
    printf("\nStack 2:\n");
    if(isEmpty2()){
        printf("Stack 2 is empty \n");
    }
    for(int i = max-1;i>=top2;i--){
        printf("%d ",stack[i]);
    }
};

int main(){
    push1(10);
    push1(20);
    push1(30);
    push2(40);
    push2(50);
    display();
}