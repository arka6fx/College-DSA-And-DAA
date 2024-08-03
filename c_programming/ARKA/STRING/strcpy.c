#include <stdio.h>

// Function to copy the source string to the destination string
void copyString(char destination[], const char source[]) {
    int i = 0;

    // Copy each character from source to destination until we reach the null terminator
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    // Add the null terminator to the end of the destination string
    destination[i] = '\0';
}

int main() {
    char source[100], destination[100];

    
    printf("Enter the source string: ");
    gets(source);

    // Copy the source string to the destination string
    copyString(destination, source);

    // Print the destination string
    printf("The destination string is: %s\n", destination);

    return 0;
}
