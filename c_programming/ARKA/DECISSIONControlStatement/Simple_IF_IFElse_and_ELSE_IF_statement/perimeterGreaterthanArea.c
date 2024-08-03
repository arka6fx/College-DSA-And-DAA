#include <stdio.h>
int main (){
    
    float l,b;
    printf("Enter length of rectangle: ");
    scanf("%f",&l);
    printf("Enter breath of rectangle: ");
    scanf("%f",&b);
    float area = l*b;
    float perimeter = 2*(l+b);
    if ( perimeter>area) {
        printf("Perimeter of rectangle is greater than its area.");
    }
    else if ( perimeter<area) {
       printf("Area of rectangle is greater than its perimeter.");
    }
    else{
        printf("Area of rectangle is equal to its perimeter."); // when l = 6 && b = 3   ||  l = b = 4 || many more
    }
    
    return 0;
}