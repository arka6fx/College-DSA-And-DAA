#include<stdio.h>
#include<stdbool.h>
int main(){
    int n,i;
    printf("Enter a number:");
    scanf("%d",&n);
    bool isprime=true;
    if(n<=1) isprime =false;
    else {
        for ( i = 2; i*i <= n ; i++)
        {
            if(n%i ==0){
            isprime =false;
            break;
            }
        }
        
    }

    if(isprime) printf("Prime number");
    else{
        printf("Not a prime number");
    }
    return 0;
}