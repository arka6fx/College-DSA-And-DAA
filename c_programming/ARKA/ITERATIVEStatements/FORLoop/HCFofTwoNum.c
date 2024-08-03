#include<stdio.h>
int main(){
    int a,b,i,hcf;
    printf("Enter the value of a and b: ");
    scanf("%d %d",&a, &b);
    int min = (a<b)? a:b;
    for (i = 1; i <=min; i++){
        if(a%i==0 && b%i==0){
           hcf=i;
        }
    }
    printf("The HCF/GCD of %d and %d is %d",a,b,hcf);
    
    return 0;
}