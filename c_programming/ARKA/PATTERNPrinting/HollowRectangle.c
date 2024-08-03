#include <stdio.h>
int main(){

    int n,m;
    printf("Enter the breadth :");    //no. of rows = no. of lines
    scanf("%d",&n);
    printf("Enter the length :"); // no. of columns = no. of stars in each line
    scanf("%d",&m);
    for(int i=1 ;i<=n ;i++ ){
        for(int j=1; j<=m ;j++ ){ 
            if(i==1 || j==1 || i== n || j == m) {
                 printf("* ");
            }
             else printf("  ");
           
           
        }
       
        printf("\n");
    }
   return 0;
}