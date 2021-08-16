#include<stdio.h>
#include<singlylinkedlist.h>

int main() {
    node *n;
    create_sll(&n);
    int op, on, num, po, e, f, len, cont, position, sea, key;
    do {
        printf("ENTER AN OPTION\n");
        printf("1. INSERT A NODE\n2. DELETE A NODE\n3. SEARCH AN ELEMENT\n4. CHECK IF THE LINKED LIST IS EMPTY\n5. CHECK IF THE LINKED LIST IS FULL\n6. GET THE LENGTH OF THE LINKED LIST\n7. DISPLAY THE LINKED LIST\n");
        scanf("%d",&op);
        switch(op) {
            case 1:
            printf("1. INSERT NODE IN AN EMPTY LINKED LIST\n2. INSERT NODE AT THE BEGINNING\n3. INSERT NODE AT THE END\n4. INSERT NODE BETWEEN TWO NODES\n");
            scanf("%d",&on);
            switch(on) {
                case 1:
                printf("ENTER A NO. TO BE INSERTED INTO THE LINKED LIST\n");
                scanf("%d",&num);
                insertempty(&n, num);
                break;

                case 2:
                printf("ENTER A NO. TO BE INSERTED INTO THE LINKED LIST\n");
                scanf("%d",&num);
                insertbegin(&n, num);
                break;

                case 3:
                printf("ENTER A NO. TO BE INSERTED INTO THE LINKED LIST\n");
                scanf("%d",&num);
                insertend(n, num);
                break;

                case 4:
                printf("ENTER THE POSITION WHERE THE NODE IS TO BE INSERTED\n");
                scanf("%d",&position);
                printf("ENTER A NO. TO BE INSERTED INTO THE LINKED LIST\n");
                scanf("%d",&num);
                insertat(n, num, position);
                break;
            }
            break;

            case 2:
            printf("1. DELETE NODE FROM THE BEGINNING\n2. DELETE NODE FROM THE END\n3. DELETE ONLY NODE\n4. DELETE NODE FROM BETWEEN TWO NODES\n");
            scanf("%d",&on);
            switch(on) {
                case 1:
                po=deletebegin(&n);
                printf("ELEMENT DELETED IS %d\n",po);
                break;

                case 2:
                po=deleteend(n);
                printf("ELEMENT DELETED IS %d\n",po);
                break;

                case 3:
                po=deleteonly(&n);
                printf("ELEMENT DELETED IS %d\n",po);
                break;

                case 4:
                printf("ENTER THE POSITION OF THE NODE TO BE DELETED\n");
                scanf("%d",&position);
                po=deletebetween(n,position);
                printf("ELEMENT DELETED IS %d\n",po);
                break;
            }
            break;

            case 3:
            printf("ENTER A NO. TO BE SEARCHED\n");
            scanf("%d",&key);
            sea=search(n,key);
            if(sea==1)
            printf("ELEMENT FOUND");
            else
            printf("ELEMENT NOT FOUND");
            break;

            case 4:
            e=isempty(n);
            if(e==1) {
                printf("LINKED LIST IS EMPTY\n");
            }
            else {
                printf("LINKED LIST IS NOT EMPTY\n");
            }
            break;

            case 5:
            f=isfull(n);
            if(f==1) {
                printf("LINKED LIST IS FULL\n");
            }
            else {
                printf("LINKED LIST IS NOT FULL\n");
            }
            break;

            case 6:
            len=length(n);
            printf("LENGTH OF LINKED LIST = %d\n",len);
            break;

            case 7:
            display(n);
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
1. INSERT A NODE
2. DELETE A NODE
3. SEARCH AN ELEMENT
4. CHECK IF THE LINKED LIST IS EMPTY
5. CHECK IF THE LINKED LIST IS FULL
6. GET THE LENGTH OF THE LINKED LIST
7. DISPLAY THE LINKED LIST
4
LINKED LIST IS EMPTY
CONTINUE?
1/0
1
ENTER AN OPTION
1. INSERT A NODE
2. DELETE A NODE
3. SEARCH AN ELEMENT
4. CHECK IF THE LINKED LIST IS EMPTY
5. CHECK IF THE LINKED LIST IS FULL
6. GET THE LENGTH OF THE LINKED LIST
7. DISPLAY THE LINKED LIST
1
1. INSERT NODE IN AN EMPTY LINKED LIST
2. INSERT NODE AT THE BEGINNING
3. INSERT NODE AT THE END
4. INSERT NODE BETWEEN TWO NODES
1
ENTER A NO. TO BE INSERTED INTO THE LINKED LIST
66
CONTINUE?
1/0
1
ENTER AN OPTION
1. INSERT A NODE
2. DELETE A NODE
3. SEARCH AN ELEMENT
4. CHECK IF THE LINKED LIST IS EMPTY
5. CHECK IF THE LINKED LIST IS FULL
6. GET THE LENGTH OF THE LINKED LIST
7. DISPLAY THE LINKED LIST
1
1. INSERT NODE IN AN EMPTY LINKED LIST
2. INSERT NODE AT THE BEGINNING
3. INSERT NODE AT THE END
4. INSERT NODE BETWEEN TWO NODES
2
ENTER A NO. TO BE INSERTED INTO THE LINKED LIST
99
CONTINUE?
1/0
1
ENTER AN OPTION
1. INSERT A NODE
2. DELETE A NODE
3. SEARCH AN ELEMENT
4. CHECK IF THE LINKED LIST IS EMPTY
5. CHECK IF THE LINKED LIST IS FULL
6. GET THE LENGTH OF THE LINKED LIST
7. DISPLAY THE LINKED LIST
1
1. INSERT NODE IN AN EMPTY LINKED LIST
2. INSERT NODE AT THE BEGINNING
3. INSERT NODE AT THE END
4. INSERT NODE BETWEEN TWO NODES
3
ENTER A NO. TO BE INSERTED INTO THE LINKED LIST
44
CONTINUE?
1/0
1
ENTER AN OPTION
1. INSERT A NODE
2. DELETE A NODE
3. SEARCH AN ELEMENT
4. CHECK IF THE LINKED LIST IS EMPTY
5. CHECK IF THE LINKED LIST IS FULL
6. GET THE LENGTH OF THE LINKED LIST
7. DISPLAY THE LINKED LIST
1
1. INSERT NODE IN AN EMPTY LINKED LIST
2. INSERT NODE AT THE BEGINNING
3. INSERT NODE AT THE END
4. INSERT NODE BETWEEN TWO NODES
4
ENTER  THE POSITION  WHERE THE NODE IS TO BE INSERTED
2
ENTER  A NO. TO  BE INSERTED  INTO  THE  LINKED  LIST
77
CONTINUE?
1/0
1
ENTER AN OPTION
1. INSERT A NODE
2. DELETE A NODE
3. SEARCH AN ELEMENT
4. CHECK IF THE LINKED LIST IS EMPTY
5. CHECK IF THE LINKED LIST IS FULL
6. GET THE LENGTH OF THE LINKED LIST
7. DISPLAY THE LINKED LIST
1
1. INSERT NODE IN AN EMPTY LINKED LIST
2. INSERT NODE AT THE BEGINNING
3. INSERT NODE AT THE END
4. INSERT NODE BETWEEN TWO NODES
2
ENTER  A NO. TO  BE INSERTED  INTO  THE  LINKED  LIST
33
CONTINUE?
1/0
1
ENTER AN OPTION
1. INSERT A NODE
2. DELETE A NODE
3. SEARCH AN ELEMENT
4. CHECK IF THE LINKED LIST IS EMPTY
5. CHECK IF THE LINKED LIST IS FULL
6. GET THE LENGTH OF THE LINKED LIST
7. DISPLAY THE LINKED LIST
2
1. DELETE NODE FROM THE BEGINNING
2. DELETE NODE FROM THE END
3. DELETE ONLY NODE
4. DELETE NODE FROM BETWEEN TWO NODES
2
ELEMENT DELETED IS 44
CONTINUE?
1/0
1
ENTER AN OPTION
1. INSERT A NODE
2. DELETE A NODE
3. SEARCH AN ELEMENT
4. CHECK IF THE LINKED LIST IS EMPTY
5. CHECK IF THE LINKED LIST IS FULL
6. GET THE LENGTH OF THE LINKED LIST
7. DISPLAY THE LINKED LIST
2
1. DELETE NODE FROM THE BEGINNING
2. DELETE NODE FROM THE END
3. DELETE ONLY NODE
4. DELETE NODE FROM BETWEEN TWO NODES
4
ENTER THE POSITION OF THE NODE TO BE DELETED
2
ELEMENT DELETED IS 99
CONTINUE?
1/0
1
ENTER AN OPTION
1. INSERT A NODE
2. DELETE A NODE
3. SEARCH AN ELEMENT
4. CHECK IF THE LINKED LIST IS EMPTY
5. CHECK IF THE LINKED LIST IS FULL
6. GET THE LENGTH OF THE LINKED LIST
7. DISPLAY THE LINKED LIST
3
ENTER A NO. TO BE SEARCHED
77
ELEMENT FOUND
CONTINUE?
1/0
1
ENTER AN OPTION
1. INSERT A NODE
2. DELETE A NODE
3. SEARCH AN ELEMENT
4. CHECK IF THE LINKED LIST IS EMPTY
5. CHECK IF THE LINKED LIST IS FULL
6. GET THE LENGTH OF THE LINKED LIST
7. DISPLAY THE LINKED LIST
6
LENGTH OF LINKED LIST = 3
CONTINUE?
1/0
1
ENTER AN OPTION
1. INSERT A NODE
2. DELETE A NODE
3. SEARCH AN ELEMENT
4. CHECK IF THE LINKED LIST IS EMPTY
5. CHECK IF THE LINKED LIST IS FULL
6. GET THE LENGTH OF THE LINKED LIST
7. DISPLAY THE LINKED LIST
7
    33  77  66
CONTINUE?
1/0
0

*/