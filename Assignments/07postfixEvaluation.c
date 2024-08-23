#include <stdio.h>
#include <ctype.h>

#define MAX 50
int stack[MAX];
int top = -1;

void push(int val) {
    if (top == MAX - 1) {
        printf("Overflow\n");
    } else {
        stack[++top] = val;
    }
}

int pop() {
    if (top == -1) {
        printf("Underflow\n");
    } else {
        return stack[top--];
    }
}

int evaluateToPostfix(char postfix[]) {
    int i;
    int a, b;
    for (i = 0; postfix[i] != '\0'; i++) {
        if (isdigit(postfix[i])) {
            push(postfix[i] - '0');
        } else {
            a = pop();
            b = pop();
            switch (postfix[i]) {
                case '+': push(b + a);
                          break;
                case '-': push(b - a);
                          break;
                case '*': push(b * a);
                          break;
                case '/': push(b / a);
                          break;
            }
        }
    }
    return pop();
}

int main() {
    char postfix[MAX];
    printf("Enter the postfix expression: ");
    scanf("%s", postfix);
    printf("The Evaluation of postfix expression is: %d\n", evaluateToPostfix(postfix));
    return 0;
}
