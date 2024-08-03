#include <stdio.h>

int main() {
    int var1=30;
    int var2=20;
    int largest = (var1>var2)? var1: var2; //makes the code compact and more readable
    printf("%d",largest);
    return 0;
}