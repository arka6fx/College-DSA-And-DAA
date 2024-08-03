#include <stdio.h>
int main(){
     int n;
    printf("Enter the number of rows :");    //no. of rows = no. of columns
    scanf("%d",&n);
    int nsp =n-1;
    for(int i=1 ;i<=n ;i++ ){                              
        for(int j=1; j<=nsp ;j++ ){   //for spaces
            printf("  ");
        }
        nsp = nsp-1;
        
         for(int k=1; k<=i;k++){ 
            printf("%d ",k);
        }
        int a = i-1;
         for(int k=1; k<=i-1;k++ ){ 
            printf("%d ",a);
            a--;
        }
          
       
        printf("\n");
    }
    return 0;
}
