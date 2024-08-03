#include <stdio.h>
int main(){
     int n;
    printf("Enter the number of rows :");    //no. of rows = no. of columns       //take odd input
    scanf("%d",&n);
    int nsp =0;
    
    int nst =n;
    for(int i=1 ;i<=n ;i++ ){                              
        for(int j=1; j<=nsp ;j++ ){   //for spaces
            printf("  ");
            
        }
        nsp++;
        
        for(int k=1; k<=nst;k++ ){
            
           printf("* ");
           
           
        }
        nst--;
        
      
          
        printf("\n");
    }

    return 0; 
}
