#include<stdio.h>
int main(){
    int x,y;
    printf("Enter two numbers you want to add:");
    scanf("%d %d",&x,&y);
    if(y>0){
        while(y!=0){
            x++;
            y--;
        }
    }
    else if(y<0) {
          while (y!=0){
            x--;
            y++;
          }
         
          
    }
    printf("Sum = %d",x);

   
    
    return 0;
}