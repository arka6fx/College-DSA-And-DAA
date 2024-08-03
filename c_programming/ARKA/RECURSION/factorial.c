#include<stdio.h>
int fact(int n){
   if(n==1) return 1;  //Base case
   else return n*fact(n-1); //recursive case
}
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int factorial = fact(n);
    printf("The factorial of %d is %d",n,factorial);
    return 0;
}