#include <stdio.h>
#include <limits.h>  // For INT_MAX

#define N 100  // Maximum number of nodes

int d[N][N], pred[N][N]; // Distance and Predecessor matrices

void floydWarshall(int n, int w[N][N]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            d[i][j] = w[i][j];
            pred[i][j] = (w[i][j] != INT_MAX && i != j) ? i : -1;
        }
    }

    for (int k = 0; k < n; k++) { // Intermediate node
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (d[i][k] + d[k][j] < d[i][j]) {  
                    d[i][j] = d[i][k] + d[k][j];
                    pred[i][j] = pred[k][j];
                }
            }
        }
    }
}

void path(int i, int j) {
    if (pred[i][j] == -1) {
        printf("%d ", i);
        return;
    }
    path(i, pred[i][j]);
    printf("%d ", j);
}

int main() {
    int n, w[N][N];

    // Prompting user for input
    printf("Enter number of nodes: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix (-1 for no direct edge):\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &w[i][j]);
            if (w[i][j] == -1)  // -1 means no direct path
                w[i][j] = INT_MAX;
        }
    }

    floydWarshall(n, w);

    int start, end;
    printf("Enter source and destination nodes: ");
    scanf("%d %d", &start, &end);

    printf("Shortest Path: ");
    path(start, end);
    printf("\n");

    return 0;
}
