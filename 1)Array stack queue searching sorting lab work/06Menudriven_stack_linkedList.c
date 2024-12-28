#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* link;
};

struct node* top = NULL;

// Check if the stack is empty
int isEmpty() {
    return top == NULL;
}

// Push an element onto the stack
void push(int data) {
    struct node* newNode = malloc(sizeof(newNode));
    if (newNode == NULL) {
        printf("Stack Overflow.\n");
        exit(1);
    }
    newNode->data = data;
    newNode->link = top;
    top = newNode;
}

// Pop an element from the stack
int pop() {
    if (isEmpty()) {
        printf("Stack Underflow.\n");
        exit(1);
    }
    struct node* temp = top;
    int val = temp->data;
    top = top->link;
    free(temp);
    return val;
}

// Peek at the top element of the stack
int peek() {
    if (isEmpty()) {
        printf("Stack Underflow.\n");
        exit(1);
    }
    return top->data;
}

// Print all elements in the stack
void print() {
    if (isEmpty()) {
        printf("Stack Underflow.\n");
        exit(1);
    }
    struct node* temp = top;
    printf("The stack elements are: ");
    while (temp) {
        printf("%d ", temp->data);
        temp = temp->link;
    }
    printf("\n");
}

// Main function to demonstrate stack operations
int main() {
    int choice, data;

    while (1) {
        printf("\n1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Print all elements of the stack\n");
        printf("5. Quit\n");
        printf("Please enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the element to be pushed: ");
                scanf("%d", &data);
                push(data);
                break;
            case 2:
                data = pop();
                printf("Deleted element is %d\n", data);
                break;
            case 3:
                printf("The topmost element of the stack is %d\n", peek());
                break;
            case 4:
                print();
                break;
            case 5:
                exit(0);
            default:
                printf("Wrong choice\n");
        }
    }

    return 0;
}
