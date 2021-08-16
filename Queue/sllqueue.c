//Queue using Singly Linked Lists

#include<stdio.h>
#include<sllqueue.h>

int main() {
    queue q;
    create_queue(&q);
    int op, num, de, pe, e, cont;
    do {
        printf("ENTER AN OPTION\n");
        printf("1. ENQUEUE\n2. DEQUEUE\n3. CHECK IF QUEUE IS EMPTY\n4. GET FRONT ITEM\n5. DISPLAY THE QUEUE\n");
        scanf("%d",&op);
        switch(op) {
            case 1:
            printf("ENTER A NO. TO BE ENQUEUED INTO THE QUEUE\n");
            scanf("%d",&num);
            enqueue(&q, num);
            break;

            case 2:
            de=dequeue(&q);
            if(isempty(&q)==1) {
                printf("QUEUE IS EMPTY\n");
            }
            else {
                printf("ELEMENT DELETED IS %d\n",de);
            }
            break;

            case 3:
            e=isempty(&q);
            if(e==1) {
                printf("QUEUE IS EMPTY\n");
            }
            else {
                printf("QUEUE IS NOT EMPTY\n");
            }
            break;

            case 4:
            pe=peek(&q);
            if(isempty(&q)==1) {
                printf("QUEUE IS EMPTY\n");
            }
            else {
                printf("ELEMENT DELETED IS %d\n",pe);
            }
            break;

            case 5:
            display(&q);
            break;

            default:
            printf("INVALID OPTION!\n");
            break;
        }
        printf("\nCONTINUE?\n");
        printf("1/0\n");
        scanf("%d",&cont);
    } while(cont == 1);
    return 0;
}


/*
OUTPUT:

ENTER AN OPTION
1. ENQUEUE
2. DEQUEUE
3. CHECK IF QUEUE IS EMPTY
4. GET FRONT ITEM
5. DISPLAY THE QUEUE
1
ENTER A NO. TO BE ENQUEUED INTO THE QUEUE
11 
CONTINUE?
1/0
1
ENTER AN OPTION
1. ENQUEUE
2. DEQUEUE
3. CHECK IF QUEUE IS EMPTY
4. GET FRONT ITEM
5. DISPLAY THE QUEUE
1
ENTER A NO. TO BE ENQUEUED INTO THE QUEUE
22 
CONTINUE?
1/0
1
ENTER AN OPTION
1. ENQUEUE
2. DEQUEUE
3. CHECK IF QUEUE IS EMPTY
4. GET FRONT ITEM
5. DISPLAY THE QUEUE
1
ENTER A NO. TO BE ENQUEUED INTO THE QUEUE
33 
CONTINUE?
1/0
1
ENTER AN OPTION
1. ENQUEUE
2. DEQUEUE
3. CHECK IF QUEUE IS EMPTY
4. GET FRONT ITEM
5. DISPLAY THE QUEUE
1
ENTER A NO. TO BE ENQUEUED INTO THE QUEUE
44 
CONTINUE?
1/0
1
ENTER AN OPTION
1. ENQUEUE
2. DEQUEUE
3. CHECK IF QUEUE IS EMPTY
4. GET FRONT ITEM
5. DISPLAY THE QUEUE
1
ENTER A NO. TO BE ENQUEUED INTO THE QUEUE
55 
CONTINUE?
1/0
1
ENTER AN OPTION
1. ENQUEUE
2. DEQUEUE
3. CHECK IF QUEUE IS EMPTY
4. GET FRONT ITEM
5. DISPLAY THE QUEUE
2 ELEMENT DELETED IS
11 
CONTINUE?
1/0
1
ENTER AN OPTION
1. ENQUEUE
2. DEQUEUE
3. CHECK IF QUEUE IS EMPTY
4. GET FRONT ITEM
5. DISPLAY THE QUEUE
2
ELEMENT DELETED IS 22 
CONTINUE?
1/0
1
ENTER AN OPTION
1. ENQUEUE
2. DEQUEUE
3. CHECK IF QUEUE IS EMPTY
4. GET FRONT ITEM
5. DISPLAY THE QUEUE
3
QUEUE IS NOT EMPTY 
CONTINUE?
1/0
1
ENTER AN OPTION
1. ENQUEUE
2. DEQUEUE
3. CHECK IF QUEUE IS EMPTY
4. GET FRONT ITEM
5. DISPLAY THE QUEUE
4
FRONT ELEMENT IS 33
CONTINUE?
1/0
1
ENTER AN OPTION
1. ENQUEUE
2. DEQUEUE
3. CHECK IF QUEUE IS EMPTY
4. GET FRONT ITEM
5. DISPLAY THE QUEUE
5
33  44  55
CONTINUE?
1/0
0

*/