#include<stdio.h>
#include<BST.h>

int main()
{ 
    node *root = NULL;
    root = insert(root, 90);
    insert(root, 10);
    insert(root, 100);
    insert(root, 60);
    insert(root, 5);
    insert(root, 40);
    insert(root, 70);
    printf("PREORDER:  ");
    preorder(root);
    printf("\n");
    printf("INORDER:  ");
    inorder(root);
    printf("\n");
    printf("POSTORDER:  ");
    postorder(root);
    return 0;
} 

/*
OUTPUT:

PREORDER:  90  10  5  60  40  70  100
INORDER:  5  10  40  60  70  90  100
POSTORDER:  5  40  70  60  10  100  90
*/
