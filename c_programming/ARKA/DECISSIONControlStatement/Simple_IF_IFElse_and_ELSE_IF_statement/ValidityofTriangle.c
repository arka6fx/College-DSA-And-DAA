#include <stdio.h>
int main()
{
    int x, y, z;
    printf("Enter first side : ");
    scanf("%d", &x);
    printf("Enter second side : ");
    scanf("%d", &y);
    printf("Enter third side : ");
    scanf("%d", &z);
    if ((x + y) > z && (y + z) > x && (z + x) > y)
    {
        printf("This is a valid triangle");
    }
    else
        printf("This is not a valid triangle");
    return 0;
}