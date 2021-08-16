#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} node;

typedef struct queue {
    node *front, *rear;	
} queue;

void create_queue(queue *q) {
    q->front=NULL;
    q->rear=NULL;
}

int isempty(queue *q) {
    return(q->rear==NULL&&q->front==NULL);
}

void enqueue(queue *q, int elt) {
    node *temp;
    temp=(node *)malloc(sizeof(node));
    temp->data=elt;
    temp->next=NULL;
    if(isempty(q)==1)
    q->front=q->rear=temp;
    else {
        q->rear->next=temp;
        q->rear=temp;
    }
}

int dequeue(queue *q) {
    node *temp;
    temp=(node *)malloc(sizeof(node));
    int elt;
    temp=q->front;
    elt=q->front->data;
    if(q->front==q->rear)
    q->front=q->rear=NULL;
    else
    q->front=q->front->next;
    free(temp);
    return elt;
}

int peek(queue *q) {
    return (q->front->data);
}

void display(queue *q) {
    node *current;
    current=q->front;
    while(current!=NULL) {
        printf("%d\t",current->data);
        current=current->next;
    }
}
