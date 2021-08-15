#include<stdio.h>
#include<stack.h>

int main() {
    stack s;
    create_stack(&s);
    int op, num, po, pe, e, f, cont;
    do {
        printf("ENTER AN OPTION\n");
        printf("1. PUSH\n2. POP\n3. CHECK IF STACK IS EMPTY\n4. CHECK IF STACK IS FULL\n5. GET TOP ITEM\n6. DISPLAY THE STACK\n");
        scanf("%d",&op);

        switch(op) {
            case 1:
            printf("ENTER A NO. TO BE PUSHED INTO THE STACK\n");
            scanf("%d",&num);
            push(&s, num);
            break;

            case 2:
            po=pop(&s);
            if(isempty(&s)==1) {
                printf("STACK IS EMPTY\n");
            }
            else {
                printf("ELEMENT DELETED IS %d\n",po);
            }
            break;

            case 3:
            e=isempty(&s);
            if(e==1) {
                printf("STACK IS EMPTY\n");
            }
            else {
                printf("STACK IS NOT EMPTY\n");
            }
            break;

            case 4:
            f=isfull(&s);
            if(f==1) {
                printf("STACK IS FULL\n");
            }
            else {
                printf("STACK IS NOT FULL\n");
            }
            break;

            case 5:
            pe=peek(&s);
            if(isempty(&s)==1) {
                printf("STACK IS EMPTY\n");
            }
            else {
                printf("ELEMENT DELETED IS %d\n",pe);
            }
            break;

            case 6:
            display(&s);
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
4. CHECK IF STACK IS FULL
5. GET TOP ITEM
6. DISPLAY THE STACK
1
ENTER A NO. TO BE PUSHED INTO THE STACK
45
CONTINUE?
1/0
1
ENTER AN OPTION
1. PUSH
2. POP
3. CHECK IF STACK IS EMPTY
4. CHECK IF STACK IS FULL
5. GET TOP ITEM
6. DISPLAY THE STACK
1
ENTER A NO. TO BE PUSHED INTO THE STACK
78
CONTINUE?
1/0
1
ENTER AN OPTION
1. PUSH
2. POP
3. CHECK IF STACK IS EMPTY
4. CHECK IF STACK IS FULL
5. GET TOP ITEM
6. DISPLAY THE STACK
1
ENTER A NO. TO BE PUSHED INTO THE STACK
66
CONTINUE?
1/0
1
ENTER AN OPTION
1. PUSH
2. POP
3. CHECK IF STACK IS EMPTY
4. CHECK IF STACK IS FULL
5. GET TOP ITEM
6. DISPLAY THE STACK
1
ENTER A NO. TO BE PUSHED INTO THE STACK
90
CONTINUE?
1/0
1
ENTER AN OPTION
1. PUSH
2. POP
3. CHECK IF STACK IS EMPTY
4. CHECK IF STACK IS FULL
5. GET TOP ITEM
6. DISPLAY THE STACK
1
ENTER A NO. TO BE PUSHED INTO THE STACK
22
CONTINUE?
1/0
1
ENTER AN OPTION
1. PUSH
2. POP
3. CHECK IF STACK IS EMPTY
4. CHECK IF STACK IS FULL
5. GET TOP ITEM
6. DISPLAY THE STACK
1
ENTER A NO. TO BE PUSHED INTO THE STACK
65
CONTINUE?
1/0
1
ENTER AN OPTION
1. PUSH
2. POP
3. CHECK IF STACK IS EMPTY
4. CHECK IF STACK IS FULL
5. GET TOP ITEM
6. DISPLAY THE STACK
1
ENTER A NO. TO BE PUSHED INTO THE STACK
76
CONTINUE?
1/0
1
ENTER AN OPTION
1. PUSH
2. POP
3. CHECK IF STACK IS EMPTY
4. CHECK IF STACK IS FULL
5. GET TOP ITEM
6. DISPLAY THE STACK
2
ELEMENT DELETED IS 76
CONTINUE?
1/0
1
ENTER AN OPTION
1. PUSH
2. POP
3. CHECK IF STACK IS EMPTY
4. CHECK IF STACK IS FULL
5. GET TOP ITEM
6. DISPLAY THE STACK
3
STACK IS NOT EMPTY
CONTINUE?
1/0
1
ENTER AN OPTION
1. PUSH
2. POP
3. CHECK IF STACK IS EMPTY
4. CHECK IF STACK IS FULL
5. GET TOP ITEM
6. DISPLAY THE STACK
6
THE STACK IS:
65
22
90
66
78
45
CONTINUE?
1/0
0
*/



