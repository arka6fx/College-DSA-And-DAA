//  Write a program in C to Check Whether a Number can be Expressed asSum of Two Prime Numbers and print all possible combinations.
#include<stdio.h>
#include<stdbool.h>
bool isPrime(int n){
    for (int i = 2; i*i <=n; i++){
        if(n%i==0) return false;
    }
    return true;
    
}
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    bool found = false;
    for(int i=2;i<=n/2;i++){
        if(isPrime(i) && isPrime(n-i)){
            printf("%d = %d + %d\n",n,i,n-i );
            found = true;
        }
    }
    if(!found)  printf("%d cannot be expressed as the sum of two prime numbers.\n", n);
    return 0;
}