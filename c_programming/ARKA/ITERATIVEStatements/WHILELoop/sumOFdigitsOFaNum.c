#include<stdio.h>

int main(){
    int n;
    printf("Enter a integer:");
    scanf("%d",&n);
    int sum=0;
    while(n!=0){
        int t =n%10;
        sum+=t;
        n/=10;
    }
    printf("Sum of digits = %d",sum);

    return 0;
}