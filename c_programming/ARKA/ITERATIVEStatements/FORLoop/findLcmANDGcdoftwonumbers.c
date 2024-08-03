#include<stdio.h>
int main(){
    int a,b,i,hcf,Lcm;
    printf("Enter the value of a and b: ");
    scanf("%d %d",&a, &b);
    int min = (a<b)? a:b;
    for (i = 1; i <=min; i++){
        if(a%i==0 && b%i==0){
           hcf=i;
        }
    }
    Lcm = (a*b)/hcf;
    printf("The HCF/GCD and LCM of %d and %d are %d and %d respectively",a,b,hcf,Lcm);
    
    return 0;
}