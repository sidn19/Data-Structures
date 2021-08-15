#include<stdio.h>
#define SIZE 10

typedef struct queue {
    int item[SIZE];
    int front, rear;	
} queue;

void create_queue(queue *q) {
    q->front=0;
    q->rear=-1;
}

void enqueue(queue *q, int n) {
    q->rear++;
    q->item[q->rear]=n;	
}

int dequeue(queue *q) {
    int x;
    x=q->item[q->front];
    q->front++;
    return x;	
}

int isempty(queue *q) {
    return(q->rear<q->front);
}

int isfull(queue *q) {
    return(q->rear==SIZE-1);
}

int peek(queue *q) {
    int x;
    x=q->item[q->front];
    return x;
}

void display(queue *q) {
    int i;
    printf("THE QUEUE IS:\n");
    for(i=q->front;i<=q->rear;i++) {
        printf("%d\t",q->item[i]);
    }	
}
