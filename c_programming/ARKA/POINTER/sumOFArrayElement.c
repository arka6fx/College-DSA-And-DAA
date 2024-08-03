#include<stdio.h>
int main(){
    int a[] ={5,16,7,89,45,32,23,10};
    int *p,sum=0;
    // for (p=&a[0];p<=&a[7]; p++){
    //         sum+=*p;                      old school stuff
    // }
    for ( p=a; p<=a+7; p++){
        sum+=*p;
    }
    
    printf("sum is %d",sum);


    return 0;
}