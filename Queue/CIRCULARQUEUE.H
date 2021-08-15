#include<stdio.h>
#define SIZE 5

typedef struct circularqueue {
    int item[SIZE];
    int front, rear;	
} cqueue;

void create_cqueue(cqueue *cq) {
    cq->front=-1;
    cq->rear=-1;
}

void enqueue(cqueue *cq, int n) {
    if(cq->front==-1)
    cq->front=0;
    cq->rear=(cq->rear+1)%SIZE;
    cq->item[cq->rear]=n;	
}

int dequeue(cqueue *cq) {
    int x;
    x=cq->item[cq->front];
    if(cq->front==cq->rear) {
        cq->front=-1;
        cq->rear=-1;
    }
    else
    cq->front=(cq->front+1)%SIZE;
    return x;
}

int isempty(cqueue *cq) {
    return(cq->rear==-1&&cq->front==-1);
}

int isfull(cqueue *cq) {
    return((cq->front==0&&cq->rear==SIZE-1)||(cq->rear==cq->front+1));
}

int peek(cqueue *cq) {
    int x;
    x=cq->item[cq->front];
    return x;
}

void display(cqueue *cq) {
    int i;
    printf("THE CIRCULAR QUEUE IS:\n");
    for(i=cq->front;i!=cq->rear;i=(i+1)%SIZE) {
        printf("%d\t",cq->item[i]);
    }
    printf("%d\t",cq->item[i]);	
}
