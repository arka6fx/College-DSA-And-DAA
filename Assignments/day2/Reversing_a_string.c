#include <stdio.h>
#include <string.h>

#define MAX 100

// Function to reverse a string using a stack
void reverseString(char str[]) {
    char stack[MAX];
    int top = -1;
    int i;

    // Push all characters of the string into the stack
    for (i = 0; str[i] != '\0'; i++) {
        stack[++top] = str[i];
    }

    // Pop all characters from the stack to get the reversed string
    for (i = 0; str[i] != '\0'; i++) {
        str[i] = stack[top--];
    }
}

// Driver program to test the function
int main() {
    char str[MAX];
    printf("Enter a string: ");
    scanf("%s", str);  // Corrected: Removed the newline character from scanf

    reverseString(str);

    printf("Reversed String: %s\n", str);

    return 0;
}
