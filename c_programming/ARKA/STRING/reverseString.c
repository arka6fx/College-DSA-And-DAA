//  WRITE  A C FUNCTION IN C WHICH WILL TAKE A STRING AS AN ARGUMENT AND REVERSE IT.
#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {          
    int length = strlen(str);
    int start = 0;
    int end = length - 1;
    char temp;

    while (start < end) {
        // Swap characters at start and end
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Move towards the middle
        start++;
        end--;
    }
}

int main() {
    char str[50];
    printf("Enter String:\n");
    gets(str);

    reverseString(str);
    printf("Reversed String: %s\n", str);

    return 0;
}

