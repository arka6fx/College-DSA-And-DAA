#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX 50
int stack[MAX];
int top = -1;

void push(int data){
	if (top == MAX - 1){
		printf("Stack Overflow");
		exit(1);
	}
	else{
		stack[++top] = data;
	}
}

int pop(){
	if (top == -1){
		printf("Stack Underflow");
		exit(1);
	}
	else{
		return stack[top--];
	}
}

int postfixEval(char postfix[]){
	int i, a, b;
	for (i = 0; postfix[i] != '\0'; i++){
		if (isdigit(postfix[i])){
			push(postfix[i] - '0');
		}
		else{
			a = pop();
			b = pop();
			switch (postfix[i]){
			case '^':
				push(b ^ a);
				break;
			case '/':
				push(b / a);
				break;
			case '*':
				push(b * a);
				break;
			case '%':
				push(b % a);
				break;
			case '+':
				push(b + a);
				break;
			case '-':
				push(b - a);
				break;
			}
		}
	}

	return pop();
}

int main(){
	char postfix[MAX];
	printf("Enter Postfix String: ");
	scanf("%s", postfix);
	printf("Evaluated Postfix Expression is: %d", postfixEval(postfix));
	return 0;
}