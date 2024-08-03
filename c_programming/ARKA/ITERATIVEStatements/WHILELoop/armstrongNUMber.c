#include<stdio.h>

int main(){
     int n;
     printf("Please enter a number:");
     scanf("%d",&n);
     int q = n;
     int count =0;
     while(n!=0){
          n/=10;
          count++;
     }
     int cnt =count;
     n=q;
     int sum = 0;
     while(n!=0){
        int ld = n%10;
        int product =1;
        while (cnt!=0){
            product=product*ld;
            cnt--;
        }
        cnt = count;
        sum = sum + product;
        n/=10;
    }
    if(sum == q) printf("Armstrong number");
    else printf("Not an Armstrong number");

    return 0;
}