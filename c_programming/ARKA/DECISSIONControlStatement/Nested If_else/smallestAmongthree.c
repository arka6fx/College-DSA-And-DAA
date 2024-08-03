#include <stdio.h>

int main() {
    int a,b,c;
    printf("Enter value of a,b and c respectively: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a<b){
           if(a<c){ //a<b && a<c
            printf("%d is the smallest",a);
           }
           else{//a<b   c<a =>  c<a<b
             printf("%d is the smallest",c);
           }
    }
    else{ //b<a
         if(b<c){  //b<a && b<c
            printf("%d is the smallest",b);
         }
         else{//b<a   b>c => c<b<a
             printf("%d is the smallest",c);
         }

    }
    return 0;
}
