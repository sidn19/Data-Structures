#include<stdio.h>
#include<stack.h>
#define SIZE 20

int main()
{
    char postfix[SIZE];
    printf("ENTER THE POSTFIX STRING:\n");
    gets(postfix);
    printf("THE ANSWER IS:\n");
    printf("%d", evaluatepost(postfix));
    return 0;
}

/*
OUTPUT:

ENTER THE POSTFIX STRING:
23*21/541*+
THE ANSWER IS:
21

*/