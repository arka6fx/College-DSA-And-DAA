//Write a C Program to print “It’s Very Hot to be at Lab Class” 50 times using a function

#include<stdio.h>
void print(int); //Function declaration/Function prototype
int main(){   
    print(50); //Function calling
    
    return 0;
}

void print(int i){   //Function definition
    for ( i = 1; i <=50; i++){
       printf("It's Very Hot to be at Lab Class\n");
    }
    
}