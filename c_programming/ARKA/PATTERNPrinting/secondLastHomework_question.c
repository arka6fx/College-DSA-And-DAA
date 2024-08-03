#include <stdio.h>
int main(){

    int n;
    printf("Enter the number of rows :"); 
    scanf("%d",&n);
    int nst = n;
    int nsp =1;
 
      printf("\n");
    for(int i=1 ;i<=n ;i++ ){
        
        int a=1;
        int b = n+i;
        
        for ( int k=1; k<=nst ;k++ ){   //for stars
            printf("%d ",a);
            a++;
        }
        for(int j=1; j<=nsp ;j++ ){   //for spaces
            printf("  ");
            b--;
        }
        for(int k=1; k<=nst ;k++ ){   // for stars
            printf("%d ",b);
            b--;
        }
        nst--;
        nsp+=2;
        
        printf("\n");
    }
   return 0;
}