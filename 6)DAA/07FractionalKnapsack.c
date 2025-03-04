#include <stdio.h>

void swap(float *a, float *b) {
    float temp = *a;
    *a = *b;
    *b = temp;
}

void sortItems(int n, float profit[], float weight[], float ratio[]) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (ratio[j] < ratio[j + 1]) {
                swap(&profit[j], &profit[j + 1]);
                swap(&weight[j], &weight[j + 1]);
                swap(&ratio[j], &ratio[j + 1]);
            }
        }
    }
}

void fractionalKnapsack(int n, float capacity, float profit[], float weight[]) {
    float x[100];
    float u = capacity;
    float ratio[100];
    int i, j;
    float totalProfit = 0.0;

    for (i = 0; i < n; i++) {
        ratio[i] = profit[i] / weight[i];
    }

    sortItems(n, profit, weight, ratio);

    for (i = 0; i < n; i++) {
        x[i] = 0.0;
    }

    for (j = 0; j < n; j++) {
        if (weight[j] > u)
            break;
        x[j] = 1.0;
        u -= weight[j];
        totalProfit += profit[j];
    }

    if (j < n) {
        x[j] = u / weight[j];
        totalProfit += profit[j] * x[j];
    }

    printf("\nFractions of items taken:\n");
    for (i = 0; i < n; i++) {
        printf("Item %d: %.2f\n", i + 1, x[i]);
    }

    printf("\nTotal profit: %.2f\n", totalProfit);
}

int main() {
    int n;
    float capacity;

    printf("Enter the number of items: ");
    scanf("%d", &n);

    float profit[100], weight[100];

    if (n > 100) {
        printf("Maximum number of items is 100.\n");
        return 1;
    }

    printf("Enter profit and weight of each item:\n");
    int i;
    for (i = 0; i < n; i++) {
        printf("Item %d (profit weight): ", i + 1);
        scanf("%f %f", &profit[i], &weight[i]);
    }

    printf("Enter knapsack capacity: ");
    scanf("%f", &capacity);

    fractionalKnapsack(n, capacity, profit, weight);

    return 0;
}

