#include <stdio.h>
int main(){

    // int n;
    // printf("Enter the number of rows :");    //no. of rows = no. of columns
    // scanf("%d",&n);
    
    // for(int i=1 ;i<=n ;i++ ){
    //     for(int j=1; j<=n-i ;j++ ){   //for spaces
    //         printf("  ");
    //     }
    //      for(int k=1; k<=2*i-1 ;k++ ){ 
    //         printf("* ");
    //     }

       
    //     printf("\n");
    // }
   
    // int n;
    // printf("Enter the number of rows :");    //no. of rows = no. of columns
    // scanf("%d",&n);
    //  int nst = 1;    //nst ---> no. of stars                        
    // for(int i=1 ;i<=n ;i++ ){                                //
    //     for(int j=1; j<=n-i ;j++ ){   //for spaces
    //         printf("  ");
    //     }
    //      for(int k=1; k<=nst;k++ ){ 
    //         printf("* ");
    //     }
    //      nst = nst +2 ;
       
    //     printf("\n");
    // }
    int n;
    printf("Enter the number of rows :");    //no. of rows = no. of columns
    scanf("%d",&n);
     int nst = 1;    //nst ---> no. of stars         
     int nsp =n-1;    //nsp --> no. of spaces
    for(int i=1 ;i<=n ;i++ ){                              
        for(int j=1; j<=nsp ;j++ ){   //for spaces
            printf("  ");
        }
        nsp = nsp-1;
         for(int k=1; k<=nst;k++ ){ 
            printf("* ");
        }
         nst = nst +2 ;
       
        printf("\n");
    }

   return 0;
}