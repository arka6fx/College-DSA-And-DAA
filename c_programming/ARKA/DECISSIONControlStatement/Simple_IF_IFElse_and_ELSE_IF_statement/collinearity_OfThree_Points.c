#include<stdio.h>
int main(){
    double x1,y1,x2,y2,x3,y3;
    printf("Input first coordinates: ");
    scanf("%lf %lf",&x1,&y1);
    printf("Input second coordinates: ");
    scanf("%lf %lf",&x2,&y2);
    printf("Input third coordinates: ");
    scanf("%lf %lf",&x3,&y3);
    double m1,m2;
    m1 = (y2-y1)/(x2-x1);
    m2 = (y3-y2)/(x3-x2);
    if( m1 == m2){
        printf("Three points lie on the straight line.");
    }
    else{
        printf("Three points do not lie on the straight line.");
    }
    return 0;
}