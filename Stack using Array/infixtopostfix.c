#include<stdio.h>
#include<stack.h>
#define SIZE 20

int main() {
    char infix[SIZE];
    printf("ENTER THE INFIX STRING:\n");
    gets(infix);
    printf("THE POSTFIX STRING IS:\n");
    printf("%s", intopost(infix));
    return 0;
}

/*
OUTPUT:

ENTER THE INFIX STRING:
(2*3)+(6/3)-(9%2)/5
THE POSTFIX STRING IS:
23*63/+92%5/-
*/
