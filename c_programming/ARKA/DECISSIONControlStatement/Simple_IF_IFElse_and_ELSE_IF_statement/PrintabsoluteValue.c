#include <stdio.h>
int main (){
    
    int n;
    printf("Input any number: ");
    scanf("%d",&n);
    if (n<0) {
        n = -n;
        
    }
    
    printf("%d is the absolute value.",n);   
    return 0;
}