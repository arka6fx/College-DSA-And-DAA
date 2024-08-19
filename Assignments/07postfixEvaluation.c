#include <stdio.h>
#include <ctype.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int num) {
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
        
    } else {
        stack[++top] = num;
    }
}

int pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        return 0;
    } else {
        return stack[top--];
    }
}

int evaluatePostfix(char exp[]) {
    int i;
    for (i = 0; exp[i] != '\0'; i++) {
        
        if (isdigit(exp[i])) {
            push(exp[i] - '0');
        } 
        else {
            int a = pop();
            int b = pop();
            switch (exp[i]) {
                case '+': push(b + a); break;
                case '-': push(b - a); break;
                case '*': push(b * a); break;
                case '/': push(b / a); break;
            }
        }
    }
    return pop();
}

int main() {
    char exp[MAX];
    
    printf("Enter postfix expression: ");
    scanf("%s", exp);
    
    printf("The result of the postfix evaluation is: %d\n", evaluatePostfix(exp));
    
    return 0;
}
