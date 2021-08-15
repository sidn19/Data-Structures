#include<stdio.h>
#include<circularqueue.h>

int main() {
    cqueue cq;
    create_cqueue(&cq);
    int op, num, de, pe, e, f, cont;
    do {
        printf("ENTER AN OPTION\n");
        printf("1. ENQUEUE\n2. DEQUEUE\n3. CHECK IF QUEUE IS EMPTY\n4. CHECK IF QUEUE IS FULL\n5. GET FRONT ITEM\n6. DISPLAY THE QUEUE\n");
        scanf("%d",&op);
        switch(op) {
            case 1:
            printf("ENTER A NO. TO BE ENQUEUED INTO THE QUEUE\n");
            scanf("%d",&num);
            enqueue(&cq, num);
            break;

            case 2:
            de=dequeue(&cq);
            if(isempty(&cq)==1) {
                printf("QUEUE IS EMPTY\n");
            }
            else {
                printf("ELEMENT DELETED IS %d\n",de);
            }
            break;

            case 3:
            e=isempty(&cq);
            if(e==1) {
                printf("QUEUE IS EMPTY\n");
            }
            else {
                printf("QUEUE IS NOT EMPTY\n");
            }
            break;

            case 4:
            f=isfull(&cq);
            if(f==1) {
                printf("QUEUE IS FULL\n");
            }
            else {
                printf("QUEUE IS NOT FULL\n");
            }
            break;

            case 5:
            pe=peek(&cq);
            if(isempty(&cq)==1) {
                printf("QUEUE IS EMPTY\n");
            }
            else {
                printf("ELEMENT DELETED IS %d\n",pe);
            }
            break;

            case 6:
            display(&cq);
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
4. CHECK IF QUEUE IS FULL
5. GET FRONT ITEM
6. DISPLAY THE QUEUE
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
4. CHECK IF QUEUE IS FULL
5. GET FRONT ITEM
6. DISPLAY THE QUEUE
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
4. CHECK IF QUEUE IS FULL
5. GET FRONT ITEM
6. DISPLAY THE QUEUE
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
4. CHECK IF QUEUE IS FULL
5. GET FRONT ITEM
6. DISPLAY THE QUEUE
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
4. CHECK IF QUEUE IS FULL
5. GET FRONT ITEM
6. DISPLAY THE QUEUE
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
4. CHECK IF QUEUE IS FULL
5. GET FRONT ITEM
6. DISPLAY THE QUEUE
4
QUEUE IS FULL

CONTINUE?
1/0
1
ENTER AN OPTION
1. ENQUEUE
2. DEQUEUE
3. CHECK IF QUEUE IS EMPTY
4. CHECK IF QUEUE IS FULL
5. GET FRONT ITEM
6. DISPLAY THE QUEUE
2
ELEMENT DELETED IS 22

CONTINUE?
1/0
1
ENTER AN OPTION
1. ENQUEUE
2. DEQUEUE
3. CHECK IF QUEUE IS EMPTY
4. CHECK IF QUEUE IS FULL
5. GET FRONT ITEM
6. DISPLAY THE QUEUE
2
ELEMENT DELETED IS 33

CONTINUE?
1/0
1
ENTER AN OPTION
1. ENQUEUE
2. DEQUEUE
3. CHECK IF QUEUE IS EMPTY
4. CHECK IF QUEUE IS FULL
5. GET FRONT ITEM
6. DISPLAY THE QUEUE
1
ENTER A NO. TO BE ENQUEUED INTO THE QUEUE
88

CONTINUE?
1/0
1
ENTER AN OPTION
1. ENQUEUE
2. DEQUEUE
3. CHECK IF QUEUE IS EMPTY
4. CHECK IF QUEUE IS FULL
5. GET FRONT ITEM
6. DISPLAY THE QUEUE
1
ENTER A NO. TO BE ENQUEUED INTO THE QUEUE
99

CONTINUE?
1/0
1
ENTER AN OPTION
1. ENQUEUE
2. DEQUEUE
3. CHECK IF QUEUE IS EMPTY
4. CHECK IF QUEUE IS FULL
5. GET FRONT ITEM
6. DISPLAY THE QUEUE
5
ELEMENT DELETED IS 44

CONTINUE?
1/0
1
ENTER AN OPTION
1. ENQUEUE
2. DEQUEUE
3. CHECK IF QUEUE IS EMPTY
4. CHECK IF QUEUE IS FULL
5. GET FRONT ITEM
6. DISPLAY THE QUEUE
6
THE CIRCULAR QUEUE IS:
44      55      11      88      99
CONTINUE?
1/0
0
*/
