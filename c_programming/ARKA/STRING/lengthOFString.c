#include <stdio.h>

int stringLength(const char str[]) {
    int length = 0;

    // Iterate through the string until we hit the null terminator
    while (str[length] != '\0') {
        length++;
    }

    return length;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str);

    // Calculating the length of the string
    int length = stringLength(str);
    printf("Length of the entered string: %d\n", length);

    return 0;
}
