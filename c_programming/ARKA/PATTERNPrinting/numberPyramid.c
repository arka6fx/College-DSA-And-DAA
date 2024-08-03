#include<stdio.h>
int main(){

      int n;
    printf("Enter the number of rows :");    //no. of rows = no. of columns
    scanf("%d",&n);
    
    for(int i=1 ;i<=n ;i++ ){
        for(int j=1; j<=n-i ;j++ ){   //for spaces
            printf("  ");
        }
        int a = 1;
         for(int k=1; k<=2*i-1 ;k++ ){ 
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }
     return 0;
    } 