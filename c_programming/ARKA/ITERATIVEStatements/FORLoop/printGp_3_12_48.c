#include <stdio.h>
//print the GP 3 12 48   r=4
int main() {
    int n,i;
    printf("Enter the term number:");
    scanf("%d",&n);
    int t=3;
    for ( i = 1; i<=n; i++){
       printf("%d ",t);
       t*=4;
    }
    
    
    return 0;
}
