#include<stdio.h>
int main(){
    int n;
    printf("Enter value of n:");
    scanf("%d",&n);
    int nsp = n-1;
    for (int  i = 0; i <=n; i++){
       for(int j=0;j<=nsp;j++){
        printf(" ");
       }
       int a=1;
       for(int k=0;k<=i;k++){
        printf("%d ",a);
        a=a*(i-k)/(k+1);
       }
       nsp--;
       printf("\n");
    }
    
    
    return 0;
}