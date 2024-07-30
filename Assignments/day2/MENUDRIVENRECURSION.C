#include <stdio.h>


int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}


int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}


int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    int choice, num1, num2;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Calculate Factorial\n");
        printf("2. Calculate Fibonacci\n");
        printf("3. Calculate GCD\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a non-negative integer: ");
                scanf("%d", &num1);
               
                printf("Factorial of %d is %d\n", num1, factorial(num1));
                
                break;

            case 2:
                printf("Enter a non-negative integer: ");
                scanf("%d", &num1);
                
                printf("Fibonacci number at position %d is %d\n", num1, fibonacci(num1));
               
                break;

            case 3:
                printf("Enter two non-negative integers: ");
                scanf("%d %d", &num1, &num2);
         
                printf("GCD of %d and %d is %d\n", num1, num2, gcd(num1, num2));
                
                break;

            case 4:
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice. Please enter a number between 1 and 4.\n");
        }
    }

    return 0;
}

