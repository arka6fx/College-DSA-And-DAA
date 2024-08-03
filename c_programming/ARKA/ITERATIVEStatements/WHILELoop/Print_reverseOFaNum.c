#include<stdio.h>

int main(){
    int n;
    printf("Enter a integer:");
    scanf("%d",&n);
    
    int reverse = 0;
    while(n!=0){
        
        int t=n%10;
        reverse = reverse*10 + t;
        n/=10;
    }
    printf("reversedDigit = %d",reverse);

    return 0;
}