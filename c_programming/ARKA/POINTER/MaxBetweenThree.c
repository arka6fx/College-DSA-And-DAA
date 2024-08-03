// A function named max which will take three integers as arguments and return maximum of these three numbers using pointers.
//  The function prototype for this function is:int max( int, int, int);
// Rewrite the function whose working function is similar to the above function but the return type of this function is void.
#include <stdio.h>
// Function prototype
int max(int, int, int);
int main() {
    int a, b, c;
    // Prompt user for input
    printf("Enter three integers:\n");
    printf("First integer: ");
    scanf("%d", &a);
    printf("Second integer: ");
    scanf("%d", &b);
    printf("Third integer: ");
    scanf("%d", &c);
    
    // Call max function and print the result
    int maximum = max(a, b, c);
    printf("The maximum of %d, %d, and %d is: %d\n", a, b, c, maximum);
    
    return 0;
}

// Function definition
int max(int num1, int num2, int num3) {
    int *ptr1 = &num1;
    int *ptr2 = &num2;
    int *ptr3 = &num3;
    
    int maxVal = *ptr1;
    
    if (*ptr2 > maxVal) {
        maxVal = *ptr2;
    }
    
    if (*ptr3 > maxVal) {
        maxVal = *ptr3;
    }
    
    return maxVal;
}

