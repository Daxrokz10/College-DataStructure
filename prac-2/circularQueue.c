#include<stdio.h>
#define max 5

int queue[max];
int front = -1 , rear = -1;

int isFull(){
    return((rear + 1) % max) == front;
};

int isEmpty(){
    return front == -1;
};

void enqueue(int data){
    if(isFull()){
        printf("Queue is full. Cannot enqueue %d\n", data);
        return;
    }
    if(isEmpty()){
        front = 0;
    }

    rear = (rear + 1) % max;
    queue[rear] = data;
    printf("%d added to queue\n",data);
};

void dequeue(){
    if(isEmpty()){
        printf("Queue is empty \n");
        return;
    }

    int val = queue[front];
    if(front == rear){
        front = rear = -1;
    }else{
        front = (front + 1) % max;
    }

    printf("%d dequeued \n",val);
}

void display(){
    if (isEmpty()){
        printf("queue is empty \n");
        return;
    }
    printf("Queue: \n");
    int i = front;
    while(1){
        printf("%d ",queue[i]);
        if(i == rear) break;
        i = (i + 1) % max;
    }
}

int main(){
    int choice, value;

    while (1) {
        printf("\n--- Circular Queue Menu ---\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        if (scanf("%d", &choice) != 1) {
            // handle non-numeric input
            printf("Invalid input. Exiting.\n");
            break;
        }

        switch (choice) {
            case 1:
                printf("Enter value to enqueue: ");
                if (scanf("%d", &value) != 1) {
                    printf("Invalid input.\n");
                    // clear stdin
                    int c; while ((c = getchar()) != '\n' && c != EOF) {}
                    break;
                }
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice. Try again.\n");
        }
    }

    return 0;

}