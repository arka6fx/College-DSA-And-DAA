#include <stdio.h>
int main(){

    int n,m;
    printf("Enter the number of rows :");    //no. of rows = no. of lines
    scanf("%d",&n);
    printf("Enter the number of columns :"); // no. of columns = no. of stars in each line
    scanf("%d",&m);
    for(int i=1 ;i<=n ;i++ ){
        for(int i=1; i<=m ;i++ ){ 
            printf("* ");
           
        }
       
        printf("\n");
    }
   return 0;
}