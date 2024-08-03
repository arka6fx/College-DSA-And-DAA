#include <stdio.h>

int main()
{
    int a, b;
    char operator;
    printf("operand operator operand :");
    scanf("%d %c %d", &a, &operator, & b);
    switch (operator)
    {
    case '+':
        printf("sum = %d", a + b);
        break;
    case '-':
        printf("sub = %d", a - b);
        break;
    case '*':
        printf("mul = %d", a * b);
        break;
    case '%':
        printf("modulus = %d", a % b);
        break;
    case '/':
        printf("div = %.3f", (float)a / b);
        break;

    default:
        break;
    }
    return 0;
}
