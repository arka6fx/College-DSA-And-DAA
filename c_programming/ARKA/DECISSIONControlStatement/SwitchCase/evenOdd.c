#include <stdio.h>

int main() {
    int number;

    // Prompt the user for input
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Using modulus operator to find if the number is odd or even
    switch (number % 2) {
        default:
            printf("Something went wrong.\n");
            break;
        case 0:
            printf("%d is even.\n", number);
            break;
        case 1:
            printf("%d is odd.\n", number);
            break;
        
    }

    return 0;
}
