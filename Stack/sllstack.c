//Stack using Singly Linked Lists

#include<stdio.h>
#include<sllstack.h>

int main() {
    node* s;
    create_stack(&s);
    int op, num, po, pe, e, cont;
    do {
        printf("ENTER AN OPTION\n");
        printf("1. PUSH\n2. POP\n3. CHECK IF STACK IS EMPTY\n4. GET TOP ITEM\n5. DISPLAY THE STACK\n");
        scanf("%d",&op);
        switch(op) {
            case 1:
            printf("ENTER A NO. TO BE PUSHED INTO THE STACK\n");
            scanf("%d",&num);
            push(s, num);
            break;

            case 2:
            po=pop(&s);
            if(isempty(s)==1) {
                printf("STACK IS EMPTY\n");
            }
            else {
                printf("ELEMENT DELETED IS %d\n",po);
            }
            break;

            case 3:
            e=isempty(s);
            if(e==1) {
                printf("STACK IS EMPTY\n");
            }
            else {
                printf("STACK IS NOT EMPTY\n");
            }
            break;

            case 4:
            pe=peek(s);
            if(isempty(s)==1) {
                printf("STACK IS EMPTY\n");
            }
            else {
                printf("ELEMENT DELETED IS %d\n",pe);
            }
            break;

            case 5:
            display(s);
            break;
            
            default:
            printf("INVALID OPTION!\n");
            break;
        }
        printf("CONTINUE?\n");
        printf("1/0\n");
        scanf("%d",&cont);
    } while(cont == 1);
    return 0;
}


/*
OUTPUT:

ENTER AN OPTION
1. PUSH
2. POP
3. CHECK IF STACK IS EMPTY
4. GET TOP ITEM
5. DISPLAY THE STACK
1
ENTER A NO. TO BE PUSHED INTO THE STACK
10
CONTINUE?
1/0
1
ENTER AN OPTION
1. PUSH
2. POP
3. CHECK IF STACK IS EMPTY
4. GET TOP ITEM
5. DISPLAY THE STACK
1
ENTER A NO. TO BE PUSHED INTO THE STACK
20
CONTINUE?
1/0
1
ENTER AN OPTION
1. PUSH
2. POP
3. CHECK IF STACK IS EMPTY
4. GET TOP ITEM
5. DISPLAY THE STACK
1
ENTER A NO. TO BE PUSHED INTO THE STACK
30
CONTINUE?
1/0
1
ENTER AN OPTION
1. PUSH
2. POP
3. CHECK IF STACK IS EMPTY
4. GET TOP ITEM
5. DISPLAY THE STACK
1
ENTER A NO. TO BE PUSHED INTO THE STACK
40
CONTINUE?
1/0
1
ENTER AN OPTION
1. PUSH
2. POP
3. CHECK IF STACK IS EMPTY
4. GET TOP ITEM
5. DISPLAY THE STACK
3
STACK IS NOT EMPTY
CONTINUE?
1/0
1
ENTER AN OPTION
1. PUSH
2. POP
3. CHECK IF STACK IS EMPTY
4. GET TOP ITEM
5. DISPLAY THE STACK
4
TOP ELEMENT IS
40
CONTINUE?
1/0
1
ENTER AN OPTION
1. PUSH
2. POP
3. CHECK IF STACK IS EMPTY
4. GET TOP ITEM
5. DISPLAY THE STACK
5
THE STACK IS:
40
30
20
10
CONTINUE?
1/0
0 

*/