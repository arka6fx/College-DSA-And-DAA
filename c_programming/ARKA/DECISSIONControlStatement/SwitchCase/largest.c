#include<stdio.h>
int main(){
    int a,b,y;
    printf("Enter value of a and b:");
    scanf("%d %d",&a,&b);
    int x = a-b;
    switch(x){
        case 0: printf("Numbers are equal");
                break;
        default: y = a/b;
                 switch(y){
                    case 0: printf("%d is the largest",b);
                    break;
                    default: printf("%d is the largest",a);
                   
                 }
    }
    
    return 0;
}