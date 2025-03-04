#include <stdio.h>

// Function to swap two values
void swap(float *a, float *b) {
    float temp = *a;
    *a = *b;
    *b = temp;
}

// Function to sort items based on profit/weight ratio (descending order)
void sortItems(int n, float profit[], float weight[], float ratio[]) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (ratio[j] < ratio[j + 1]) {
                swap(&profit[j], &profit[j + 1]);
                swap(&weight[j], &weight[j + 1]);
                swap(&ratio[j], &ratio[j + 1]);
            }
        }
    }
}

// Function to solve the Fractional Knapsack problem
void fractionalKnapsack(int n, float capacity, float profit[], float weight[]) {
    float x[n], u = capacity;  // x[] stores the fraction of each item taken

    // Compute profit/weight ratio
    float ratio[n];
    for (int i = 0; i < n; i++) {
        ratio[i] = profit[i] / weight[i];
    }

    // Sort items based on profit/weight ratio
    sortItems(n, profit, weight, ratio);

    // Initialize x[i] to 0
    for (int i = 0; i < n; i++) {
        x[i] = 0.0;
    }

    // Select items
    int i;
    for (i = 0; i < n; i++) {
        if (weight[i] > u)  // If the item is too heavy, break
            break;
        x[i] = 1.0;  // Take the full item
        u -= weight[i];  // Reduce the available capacity
    }

    // If there is still capacity left, take a fraction of the next item
    if (i < n) {
        x[i] = u / weight[i];
    }

    // Print results
    printf("\nFractions of items taken:\n");
    for (int i = 0; i < n; i++) {
        printf("Item %d: %.2f\n", i + 1, x[i]);
    }
}

int main() {
    int n;
    float capacity;

    // Taking input from the user
    printf("Enter the number of items: ");
    scanf("%d", &n);

    float profit[n], weight[n];  // Arrays to store profit and weight

    printf("Enter profit and weight of each item:\n");
    for (int i = 0; i < n; i++) {
        printf("Item %d (profit weight): ", i + 1);
        scanf("%f %f", &profit[i], &weight[i]);
    }

    printf("Enter knapsack capacity: ");
    scanf("%f", &capacity);

    // Solve fractional knapsack problem
    fractionalKnapsack(n, capacity, profit, weight);

    return 0;
}
