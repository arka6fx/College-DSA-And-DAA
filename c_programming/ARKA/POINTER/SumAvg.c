// Write a program to display sum and average of numbers from m to n using pointer.
#include <stdio.h>
int main() {
    int m, n, sum = 0;
    float average;
    int *ptr_m, *ptr_n, *ptr_sum;
    float *ptr_avg;

    // Prompt user for input
    printf("Enter the value of m: ");
    scanf("%d", &m);
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Assign pointers to variables
    ptr_m = &m;
    ptr_n = &n;
    ptr_sum = &sum;
    ptr_avg = &average;

    // Calculate sum using pointers
    for (int i = *ptr_m; i <= *ptr_n; i++) {
        *ptr_sum += i;
    }

    // Calculate average using pointers
    *ptr_avg = (float)(*ptr_sum) / (*ptr_n - *ptr_m + 1);

    // Display sum and average
    printf("The sum from %d to %d is: %d\n", *ptr_m, *ptr_n, *ptr_sum);
    printf("The average from %d to %d is: %.2f\n", *ptr_m, *ptr_n, *ptr_avg);

    return 0;
}
