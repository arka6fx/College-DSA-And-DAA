#include <stdio.h>
int main() {
    int i;
    for(i=1;i<=100;i++){
        if(i%2==1) continue;//used to skip some iteration
        printf("%d ",i);
    }
    
    return 0;
}
