#include <stdio.h>
#include <string.h>

#define MAX 100 // Maximum size of the stack

char stack[MAX];
int top = -1;


void push(char ch) {
    if (top < MAX - 1) {
        top++;
        stack[top] = ch;
    }
}

char pop() {
    if (top >= 0) {
        char ch = stack[top];
        top--;
        return ch;
    }
    
}

void reverseString(char str[]) {
    int n = strlen(str);
    
    
    for (int i = 0; i < n; i++) {
        push(str[i]);
    }

    
    for (int i = 0; i < n; i++) {
        str[i] = pop();
    }
}


int main() {
    char str[MAX];
    
    printf("Enter a String:");
    scanf("%s",str);
    
    reverseString(str);
    
    printf("Reversed String: %s\n", str);
    
    return 0;
}
