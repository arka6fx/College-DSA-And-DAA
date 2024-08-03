#include<stdio.h>
int main() {
    int x,y;
    printf("Input coordinates: ");
    scanf("%d %d",&x,&y);
    if( x == 0 && y == 0){
        printf("Point lies on origin.");
    }
    else if( x == 0 ){
        printf("Point lies on y axis.");
    }
    else if( y == 0 ){
        printf("Point lies on x axis.");
    }
    else if( x>0 && y>0){
        printf("Point lies on 1st quadrant.");
    }
    else if( x<0 && y>0){
        printf("Point lies on 2nd quadrant.");
    }
    else if( x<0 && y<0){
        printf("Point lies on 3rd quadrant.");
    }
    else{
        printf("Point lies on 4th quadrant.");
    }
    
    return 0;
}