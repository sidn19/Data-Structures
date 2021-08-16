#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} node;

void create_stack(node **top) {
    *top=NULL;
}

int isempty(node *top) {
    return (top==NULL);
}

void push(node *top,int elt) {
    node *temp;
    temp=(node *)malloc(sizeof(node));
    temp->data=elt;
    temp->next=top;
    top=temp;
}

int pop(node **top) {
    int elt;
    node *temp;
    elt=(*top)->data;
    temp=*top;
    *top=(*top)->next;
    free(temp);
    return elt;
}

int peek(node *top) {
    int elt;
    elt=top->data;
    return elt;
}

void display(node *top) {
    node *current;
    while(current!=NULL) {
        printf("%d\n",current->data);
        current=current->next;
    }
}
