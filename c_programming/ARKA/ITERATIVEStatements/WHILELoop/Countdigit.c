#include<stdio.h>

int main(){
    int n;
    printf("Enter a integer:");
    scanf("%d",&n);
   
    int count=0;
    while(n!=0){
        n/=10;
        count ++;
    }
    printf("digit = %d",count);

    return 0;
}