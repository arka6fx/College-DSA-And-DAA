#include<stdio.h>

int main(){
    int base,exponent;
    printf("Enter the base:");
    scanf("%d",&base);
    printf("Enter the exponent:");
    scanf("%d",&exponent);
    int result1=1;
    float result2=1.0;
    if(exponent>0){
        while(exponent!=0){
            result1= result1*base;
            exponent--;
        }
        printf("%d to the power %d is %d",base,exponent,result1);
    }
    else{
        while(exponent!=0){
            result2 = result2 *(1.0/base);
            exponent++;  
        }
        printf("%d to the power %d is %.10f",base,exponent,result2);
    }
    return 0;
}