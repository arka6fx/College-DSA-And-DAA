#include <stdio.h>

int main() {
    int n,i;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int factorial = 1;
    for(i=1;i<=n;i++){
        factorial *=i;
        printf("Factorial of %d is %d \n",i,factorial);
    }
    
    return 0;
}
