#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} node;
node *head;

void create_sll(node **head) {
    *head=NULL;
}

void display(node *head) {
    node *current;
    current=head;
    while(current!=NULL) {
        printf("\t%d",current->data);
        current=current->next;
    }
}

int isempty(node *head) {
    return (head==NULL);
}

int isfull(node *head) {
    node *temp;
    temp=(node *)malloc(sizeof(node));
    return (temp==NULL);
}

int length(node *head) {
    int count;
    node *current;
    current=head;
    while(current!=NULL) {
        count++;
        current=current->next;
    }
    return count;
}

int search(node *head,int key) {
    node *current;
    current=head;
    while(current!=NULL) {
        if(current->data==key)
        return 1;
        current=current->next;
    }
    return 0;
}

void insertempty(node **head,int elt) {
    node *temp;
    temp=(node *)malloc(sizeof(node));
    temp->data=elt;
    temp->next=NULL;
    *head=temp;
}

void insertbegin(node **head,int elt) {
    node *temp;
    temp=(node *)malloc(sizeof(node));
    temp->data=elt;
    temp->next=*head;
    *head=temp;
}

void insertend(node *head,int elt) {
    node *current,*temp;
    temp=(node *)malloc(sizeof(node));
    temp->data=elt;
    temp->next=NULL;
    current=head;
    while(current->next!=NULL)
    current=current->next;
    current->next=temp;
}

void insertat(node *head,int elt,int pos) {
    node *current,*temp;
    int count=1;
    temp=(node *)malloc(sizeof(node));
    temp->data=elt;
    current=head;
    while(count!=pos-1) {
        current=current->next;
        count++;
    }
    temp->next=current->next;
    current->next=temp;
}

int deletebegin(node **head) {
    int ele;
    node *temp;
    temp=*head;
    ele=temp->data;
    *head=(*head)->next;
    free(temp);
    return ele;
}

int deleteend(node *head) {
    int ele;
    node *current,*temp;
    current=head;
    while(current->next->next!=NULL)
    current=current->next;
    temp=current->next;
    ele=temp->data;
    current->next=NULL;
    free(temp);
    return ele;
}

int deleteonly(node **head) {
    int ele;
    node *temp;
    temp=*head;
    ele=temp->data;
    free(temp);
    *head=NULL;
    return ele;
}

int deletebetween(node *head,int pos) {
    int ele,count=1;
    node *current,*temp;
    current=head;
    while(count!=pos-1) {
        count++;
        current=current->next;
    }
    temp=current->next;
    ele=temp->data;
    current->next=temp->next;
    free(temp);
    return ele;
}
