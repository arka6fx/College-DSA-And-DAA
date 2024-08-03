#include <stdio.h>
#define MAX 50
int main(){
    int a[MAX][MAX], b[MAX][MAX], product[MAX][MAX];
    int arows, acolumns, brows, bcolumns;
    int i, j, k;
    int sum = 0;
    printf("Enter the rows and columns of the matix a: ");
    scanf("%d %d", &arows, &acolumns);
    printf("Enter the elements of matrix a: ");
    for (i = 0; i < arows; i++){
        for (j = 0; j < acolumns; j++){
            scanf("%d", &a[i][j]);
        }
    } 
    printf("Enter the rows and columns of the matix b: ");
    scanf("%d %d", &brows, &bcolumns);
    printf("Enter the elements of matrix b: ");
    for (i = 0; i < brows; i++){
        for (j = 0; j < bcolumns; j++){
            scanf("%d", &b[i][j]);
        }
    }
    if (acolumns != brows){
        printf("sorry! We cannot multiply the matrices a and b");
    }
    else{
        for (i = 0; i < arows; i++){
            for (j = 0; j < bcolumns; j++){
                for (k = 0; k < brows; k++){
                    sum += a[i][k] * b[k][j];
                }
                product[i][j] = sum;
                sum = 0;
            }
        }
        printf("Resultant Matrix\n");
        for (i = 0; i < arows; i++){
            for (j = 0; j < bcolumns; j++){
                printf("%d ", product[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
