#include <stdio.h>
int main(){

    int n;
    printf("Enter the number of rows :");    //no. of rows = no. of columns
    scanf("%d",&n);
    int a = 1;
    for(int i=1 ;i<=n ;i++ ){
        for(int j=1; j<=i ;j++ ){ 
            printf("%d ",a);
            a=a+2;
        }
       
        printf("\n");
    }
   return 0;
}