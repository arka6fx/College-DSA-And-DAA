#include <stdio.h>


int fact(int n) {
    if (n == 0)
        return 1;
    else
        return n * fact(n - 1);
}
int fibo(int n) {
    if(n==0) return 0;
    else if(n==1) return 1;
    else  return fibo(n-1)+ fibo(n-2);
}
int gcd(int a, int b) {
    if (a%b == 0)
        return b;
    else
        return gcd(b, a % b);
}
int main() {
    int choice, num1,term,i, num2;
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
               
                printf("Factorial of %d is %d\n", num1, fact(num1));
                
                break;

            case 2:
                printf("Enter the term no. of terms of fibonacci series: ");
                scanf("%d", &term);
                printf("Your fibonacci series is: ");
                for(i=0;i<term;i++){
                    printf("%d ",fibo(i));
                }
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

