#include <stdio.h>
int main()
{
    int a, b, c,d;
    printf("Enter four numbers : ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a > b && a > c && a > d){
        printf("%d is the greatest.", a);
    }
    if (b > c && b > a && b > d){
        printf("%d is the greatest", b);
    }
    if (c > a && c > b && c > d){
        printf("%d is the greatest", c);
    }
    if (d > a && d > b && d > c){
        printf("%d is the greatest", d);
    }
    return 0;
}