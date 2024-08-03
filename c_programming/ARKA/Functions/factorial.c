// Write a C Program to calculate factorial of a number using function call
// where the number should be passed as parameter to the function.
#include<stdio.h>
int fact(int);
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int factorial = fact(n);
    printf("The factorial of %d is %d",n,factorial);
    return 0;
}
int fact(int n){
    int fact=1;
    for (int i = 1; i <=n; i++){
        fact = fact*i;
    }
    return fact;
    
}