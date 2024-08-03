#include<stdio.h>

int main(){
    int n,i;
    printf("Enter the number:");
    scanf("%d",&n);
    int result=0;
    for(i=1;i<n;i++){
        if(n%i == 0){
         result = result + i;
        }
    }
    if (result == n) printf("Perfect number");
    else printf("Not a perfect number"); 
    return 0;
}