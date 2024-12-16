#include <stdio.h>
int main() {
    int m,n,p,q,i,j,k;
    printf("Enter the number of rows for matrix1: ");
    scanf("%d", &m);
    printf("Enter the number of columns for matrix1: ");
    scanf("%d", &n);
    printf("Enter the number of rows for matrix2: ");
    scanf("%d", &p);
    printf("Enter the number of columns  for matrix2: ");
    scanf("%d", &q);

    int arr1[m][n], arr2[p][q], mul[m][q]; 

    printf("Enter the elements for matrix1:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter the elements for matrix2:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            scanf("%d", &arr2[i][j]);
        }
    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            mul[i][j]=0;
            for ( k = 0; k < n; k++)
            {
               mul[i][j]+= arr1[i][k]*arr2[k][j];
            }
           
        }
    }
    
    

    printf("\nYour matrix after multiplication:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            printf("%d ", mul[i][j]);
        }
        printf("\n");
    }

    return 0;
}