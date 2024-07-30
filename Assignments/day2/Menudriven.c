#include <stdio.h>
#define N 5
int stack[N];
int top = -1;

void push(int num) {
    if (top == N - 1) {
        printf("Overflow\n");
    } else {
        top++;
        stack[top] = num;
    }
}

void pop() {
	int  x;
    if (top == -1) {
        printf("Underflow\n");
    } else {
    	x=stack[top];
    	printf("%d",x);
        top--;
    }
}

void display() {
    if (top == -1) {
        printf("Stack is empty\n");
        return;
    }
    printf("Your stack is:\n");
    int i;
    for ( i= top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() {
    int num;
    int ch;
    
    do {
        printf("Menu:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        
        scanf("%d", &ch);
        
        switch (ch) {
            case 1:
                printf("Enter the number you want to push: ");
                scanf("%d", &num);
                push(num);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Please! Enter the correct choice\n");
             
        }
    } while (ch != 4);
    
    return 0;
}

