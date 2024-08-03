#include <stdio.h>
int main(){
    int arows, acolumns, brows, bcolumns, i, j;
    
    printf("Enter the no. of rows and columns of matrix a: ");
    scanf("%d %d", &arows, &acolumns);
    int a[arows][acolumns]; 
    printf("Enter the elements of the matrix: ");
    for (i = 0; i < arows; i++){
        for (j = 0; j < acolumns; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the no. of rows and columns of matrix b: ");
    scanf("%d %d", &brows, &bcolumns);
    int b[brows][bcolumns], sub[arows][acolumns];
    printf("Enter the elements of the matrix: ");
    for (i = 0; i < brows; i++){
        for (j = 0; j < bcolumns; j++){
            scanf("%d", &b[i][j]);
        }
    }
    if (arows != brows || acolumns != bcolumns){
        printf("Matrix subtraction not possible");
    }
    else{
        for (i = 0; i < brows; i++){
            for (j = 0; j < bcolumns; j++){
                sub[i][j] = a[i][j] - b[i][j];
            }
        }
        printf("The resultant matrix after subtraction: \n");
        for (i = 0; i < arows; i++){
            for (j = 0; j < acolumns; j++){
               printf("%d ", sub[i][j]); 
            }
            printf("\n");
        }
    }
    return 0;
}
