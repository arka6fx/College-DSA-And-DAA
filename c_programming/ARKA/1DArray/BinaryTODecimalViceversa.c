#include <stdio.h>
// Function to convert decimal to binary
void decimalToBinary(int n) {
    int binaryNum[32];
    int i = 0;

    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    // Printing the binary number in reverse order
    printf("Binary equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binaryNum[j]);
    }
    printf("\n");
}

// Function to convert binary to decimal
int binaryToDecimal(int n) {
    int decimalNum = 0;
    int base = 1;

    while (n > 0) {
        int lastDigit = n % 10;
        n = n / 10;
        decimalNum += lastDigit * base;
        base = base * 2;
    }

    return decimalNum;
}

int main() {
    int choice;
    printf("Choose an option:\n");
    printf("1. Convert Decimal to Binary\n");
    printf("2. Convert Binary to Decimal\n");
    scanf("%d", &choice);

    if (choice == 1) {
        int decimal;
        printf("Enter a decimal number: ");
        scanf("%d", &decimal);
        decimalToBinary(decimal);
    } else if (choice == 2) {
        int binary;
        printf("Enter a binary number: ");
        scanf("%d", &binary);
        int decimal = binaryToDecimal(binary);
        printf("Decimal equivalent: %d\n", decimal);
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}
