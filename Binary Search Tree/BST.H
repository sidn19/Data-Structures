#include<stdio.h>
#include<stdlib.h>

typedef struct node { 
    int key; 
    struct node *left, *right; 
} node;

node *newNode(int item) {
    node *temp =  (node *)malloc(sizeof(struct node));
    temp->key = item; 
    temp->left = temp->right = NULL;
    return temp;
}

void preorder(node *root) {
    if (root != NULL) {
        printf("%d  ", root->key);
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(node *root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d  ", root->key);
        inorder(root->right);
    }
}

void postorder(node *root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%d  ", root->key);
    }
}

node *insert(struct node *root, int key) {
    if (root == NULL)
    return newNode(key);
    if (key < root->key)
    root->left  = insert(root->left, key);
    else if(key > root->key)
    root->right = insert(root->right, key);  
    return root;
}
