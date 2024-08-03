#include<stdio.h>

int main(){
     int n,i;
     printf("Please enter a number:");
     scanf("%d",&n);
     int q=n;
     int sum =0;
     while(q!=0){
        int ld = q%10;
        int fact =1;
        for (i = 1; i <= ld; i++){
           fact = fact*i; 
        }
        sum+=fact;
        q/=10;
    }
    if(sum =n) printf("strong number");
    else printf("Not a strong number");
     return 0;
}