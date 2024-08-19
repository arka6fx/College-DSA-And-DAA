#include <stdio.h>
#include <string.h>

#define MAX 100


void reverseString(char str[]) {
    char stack[MAX];
    int top = -1;
    int i;

    for (i = 0; str[i] != '\0'; i++) {
        stack[++top] = str[i];
    }

    for (i = 0; str[i] != '\0'; i++) {
        str[i] = stack[top--];
    }
}

int main() {
    char str[MAX];
    printf("Enter a string: ");
    scanf("%s", str);  

    reverseString(str);

    printf("Reversed String: %s\n", str);

    return 0;
}
