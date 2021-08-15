#include<stdio.h>
#define SIZE 20

typedef struct stack {
    int item[SIZE];
    int top;	
} stack;

int isempty(stack *s) {
    return(s->top==-1);
}

int isfull(stack *s) {
    return(s->top==SIZE-1);
}

void create_stack(stack *s)
{
    s->top=-1;
}

void push(stack *s, int n) {
    s->top++;
    s->item[s->top]=n;	
}

int pop(stack *s) {
    int x;
    x=s->item[s->top];
    s->top--;
    return x;	
}

int peek(stack *s) {
    int x;
    x=s->item[s->top];
    return x;
}

void display(stack *s) {
    int i;
    for(i=s->top;i>=0;i--) {
        printf("\n%d",s->item[i]);
    }	
}

int getprecedence(char ch) {
    if(ch == '*' || ch == '/' || ch == '%')
    return 10;
    else if(ch == '+' || ch == '-')
    return 7;
    else
    return 0;
}

char *intopost(char infix[]) {
    static char postfix[SIZE];
    char ch;
    int i, j=0;
    stack s;
    create_stack(&s);
    for(i = 0; infix[i] != '\0'; i++) {
        ch = infix[i];
        if(ch == 'c')
        push(&s, ch);
        else if(ch >= '0' && ch<= '9')
        postfix[j++] = ch;
        else if(ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%') {
            while(!isempty(&s) && getprecedence(ch) <= getprecedence(peek(&s))) {
                postfix[j++] = pop(&s);
            }
            push(&s, ch);
        }
        else if(ch == ')') {
            while(!isempty(&s) && peek(&s) != '(') {
                postfix[j++] = pop(&s);
            }
            pop(&s);
        }
    }
    while(!isempty(&s)) {
    postfix[j++] = pop(&s);
    }
    postfix[j] = '\0';
    return postfix;
}


int evaluatepost(char postfix[]) {
    stack s;
    int i, ans, op1, op2;
    char ch;
    for(i=0; postfix[i] != '\0'; i++) {
        ch = postfix[i];
        if(ch >= '0' && ch<= '9')
        push(&s, ch-'0');
        else if(ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%') {
            op2 = pop(&s);
            op1 = pop(&s);
            switch(ch) {
                case '+': ans = op1 + op2;
                push(&s, ans);
                break;
                case '-': ans = op1 - op2;
                push(&s, ans);
                break;
                case '*': ans = op1 * op2;
                push(&s, ans);
                break;
                case '/': ans = op1 / op2;
                push(&s, ans);
                break;
                case '%': ans = op1 % op2;
                push(&s, ans);
                break;
            }
        }
    }
    return pop(&s);
}
