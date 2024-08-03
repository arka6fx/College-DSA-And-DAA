#include <stdio.h>
int main(){

    int n;
    printf("Enter the number of rows :");    //no. of rows = no. of columns
    scanf("%d",&n);
    
    for(int i=1 ;i<=n ;i++ ){
        for(int i=1; i<=n ;i++ ){ 
            printf("* ");
        }
       
        printf("\n");
    }
   return 0;
}