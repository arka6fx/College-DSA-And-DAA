#include <stdio.h>
int main (){
    
    int n;
    printf("Input any number: ");
    scanf("%d",&n);
    if (n%3 == 0  && n%5 == 0) {
        printf("%d is divible by 3 and 5.",n);
    }
    else {
        printf("%d is not divible by 3 and 5.",n); 

    }
    
    return 0;
}