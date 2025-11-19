#include <stdio.h>
#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

void enqueue(int value) {
    if (rear == SIZE - 1)
        printf("Queue Overflow! Cannot insert %d\n", value);
    else {
        if (front == -1) front = 0;
        queue[++rear] = value;
        printf("%d enqueued into queue\n", value);
    }
}

void dequeue() {
    if (front == -1 || front > rear)
        printf("Queue Underflow! No element to remove\n");
    else
        printf("%d dequeued from queue\n", queue[front++]);
}

void display() {
    if (front == -1 || front > rear)
        printf("Queue is empty\n");
    else {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    display();
    return 0;
}

