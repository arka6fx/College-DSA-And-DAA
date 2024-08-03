#include<stdio.h>

int main(){
    int n;
    printf("Enter a integer:");
    scanf("%d",&n);
    
    int  sum = 0; 
    while(n!=0){
        int t = n%10;
        if(t%2==0) sum+=t;
        n/=10;
    }
    printf("EvendigitSum = %d",sum);

    return 0;
}