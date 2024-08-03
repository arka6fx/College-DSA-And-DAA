#include <stdio.h>
int main (){
    
    int n;
    printf("Input any number: ");
    scanf("%d",&n);
    if (n%2==0) {
        printf("%d is an even number.",n);
    }
    if (n%2!=0) {
        printf("%d is an odd number.",n); 

    }
        
    return 0;
}