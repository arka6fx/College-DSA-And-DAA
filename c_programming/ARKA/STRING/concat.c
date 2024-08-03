#include <stdio.h>

// Function to concatenate two strings
void concatenateStrings(char destination[],char source[]) {
    int destLength = 0;

    // Find the length of the destination string
    while (destination[destLength] != '\0') {
        destLength++;
    }

    // Concatenate the source string to the end of the destination string
    int i = 0;
    while (source[i] != '\0') {
        destination[destLength + i] = source[i];
        i++;
    }

    // Add the null terminator to the end of the concatenated string
    destination[destLength + i] = '\0';
}

int main() {
    char firstString[100], secondString[100];

    // Prompt the user to enter the first string
    printf("Enter the first string: ");
    gets(firstString);

    printf("Enter the second string: ");
     gets(secondString);


    // Concatenate the second string to the end of the first string
    concatenateStrings(firstString, secondString);

    // Print the concatenated string
    printf("The concatenated string is: %s\n", firstString);

    return 0;
}
