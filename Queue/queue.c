#include<stdio.h>
#include<queue.h>

int main() {
    queue q;
    create_queue(&q);
    int op, num, de, pe, e, f, cont;
    do {
        printf("ENTER AN OPTION\n");
        printf("1. ENQUEUE\n2. DEQUEUE\n3. CHECK IF QUEUE IS EMPTY\n4. CHECK IF QUEUE IS FULL\n5. GET FRONT ITEM\n6. DISPLAY THE QUEUE\n");
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
            f=isfull(&q);
            if(f==1) {
                printf("QUEUE IS FULL\n");
            }
            else {
                printf("QUEUE IS NOT FULL\n");
            }
            break;

            case 5:
            pe=peek(&q);
            if(isempty(&q)==1) {
                printf("QUEUE IS EMPTY\n");
            }
            else {
                printf("ELEMENT DELETED IS %d\n",pe);
            }
            break;

            case 6:
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
4. CHECK IF QUEUE IS FULL
5. GET FRONT ITEM
6. DISPLAY THE QUEUE
1
ENTER A NO. TO BE ENQUEUED INTO THE QUEUE
34

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
56

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
90

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
ELEMENT DELETED IS 34

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
84

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
3
QUEUE IS NOT EMPTY

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
QUEUE IS NOT FULL

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
ELEMENT DELETED IS 56

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
THE QUEUE IS:
56      90      84
CONTINUE?
1/0
0
*/
