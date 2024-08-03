#include<stdio.h>
int var=10;  //global variable
int fun(){
    printf("%d\n",var);
}
int main(){
    fun();
    int var =4; //local variable to main function
    printf("%d\n",var);
    
    return 0;
}

