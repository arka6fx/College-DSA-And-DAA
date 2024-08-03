#include <stdio.h>
int main(){
    int a, b, c;
    printf("Enter three numbers : ");
    scanf("%d %d %d", &a, &b, &c);
    if (a>b){ //a>b
        if(a>c){  //a>c && a>b
        printf("%d is the greatest.", a);
        }
        else { //c>a>b
        printf("%d is the greatest.", c);
        }

    }
    else{ //b>a
        if(b>c){ // b>a && b>c
        printf("%d is the greatest.", b);   
        }
        else{ //c>b>a
        printf("%d is the greatest.", c);   
        }
    }
    
    return 0;
}