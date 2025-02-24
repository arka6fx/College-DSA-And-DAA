#include <stdio.h>
#include <limits.h>

// Function to perform Matrix Chain Multiplication
void matrixChainOrder(int p[], int n) {
    int m[n][n], s[n][n];

    // Initialize cost for single matrix multiplication to 0
    for (int i = 1; i < n; i++) {
        m[i][i] = 0;
    }

    // L is the chain length
    for (int L = 2; L < n; L++) {
        for (int i = 1; i < n - L + 1; i++) {
            int j = i + L - 1;
            m[i][j] = INT_MAX;

            for (int k = i; k < j; k++) {
                int q = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j];

                if (q < m[i][j]) {
                    m[i][j] = q;
                    s[i][j] = k;
                }
            }
        }
    }

    printf("Minimum number of multiplications: %d\n", m[1][n - 1]);
}

// Driver function
int main() {
    int arr[] = {5, 4, 6, 2, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    matrixChainOrder(arr, n);

    return 0;
}
