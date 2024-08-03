#include<stdio.h>
#define MIN(a,b) (a<b)?a:b  //function like macro
#define  c 20   //object like macro
int main(){
    
    int x = MIN(2,3);
    printf("%s",__TIME__);
    printf("%d",printf("Hello"));

    return 0;
}