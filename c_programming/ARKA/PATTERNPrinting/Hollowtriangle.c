#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
  
    for (int i = 1; i<=n; i++){
    
       for (int k= 1; k<=2*n-1; k++)
       {
         if((i+k==n+1)||(k-i==n-1) ||(i==n)) {printf("* ");}
         else  {printf("  ");}
       }
       printf("\n");
    }
    
}