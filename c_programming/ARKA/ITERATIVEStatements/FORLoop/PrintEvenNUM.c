#include <stdio.h>
//print all even numbers between 1 to 100
int main() {
    int i;
    for(i=1;i<=100;i++){
        if(i%2==0) printf("%d ",i);
    }
    
    return 0;
}
