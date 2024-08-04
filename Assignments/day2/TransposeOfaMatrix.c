#include <stdio.h>

int main() {
    int m, n, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &m);
    printf("Enter the number of columns: ");
    scanf("%d", &n);

    int arr[m][n], transpose[n][m]; // Declare transpose matrix

    printf("Enter the elements of the array:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Calculate transpose
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            transpose[i][j] = arr[j][i];
        }
    }

    printf("\nYour matrix after taking transpose:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
