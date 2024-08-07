// Tower of Hanoi
#include<stdio.h>
void tower(int n,char beg,char aux,char end){
    if(n<=0){
        printf("Illigal entry");
    }
    else if(n==1){
        printf("Move from %c to %c \n",beg,end);
    }
    else{
        tower(n-1,beg,end,aux);
        tower(1,beg,aux,end);
        tower(n-1,aux,beg,end);
    }
}
int main(){
    char a,b,c;
    int n;
    printf("Enter the number of disk : ");
    scanf("%d",&n);
    printf("Tower of Hanoi of %d discs are : \n",n);
    tower(n,'a','b','c');
    return 0;
}
