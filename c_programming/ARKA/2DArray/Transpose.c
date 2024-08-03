#include <stdio.h>
int main(){
    int arows, acolumns, i, j;
    
    printf("Enter the no. of rows and columns of matrix a: ");
    scanf("%d %d", &arows, &acolumns);
    int a[arows][acolumns]; 
    printf("Enter the elements of the matrix: ");
    for (i = 0; i < arows; i++){
        for (j = 0; j < acolumns; j++){
            scanf("%d", &a[i][j]);
        }
    }
    int b[acolumns][arows];

        for (i = 0; i < acolumns; i++){
            for (j = 0; j <arows; j++){
                
                b[i][j]=a[j][i];
            }
        }
        printf("The resultant matrix after taking Transpose: \n");
        for (i = 0; i < acolumns; i++){
            for (j = 0; j < arows; j++){
               printf("%d ", b[i][j]); 
            }
            printf("\n");
        }

    return 0;
}
