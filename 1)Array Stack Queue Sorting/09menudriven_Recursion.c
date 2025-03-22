#include <stdio.h>

int Fact(int n){
	if (n == 0)
		return 1;
	else
		return n * Fact(n - 1);
}

int Fibo(int n){
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return Fibo(n - 1) + Fibo(n - 2);
}

int GCD(int a, int b){
	if (a % b == 0)
		return b;
	else
		return GCD(b, a % b);
}

int main(){
	int choice, num, i, num1;

	while (1){
		printf("\n---Menu---\n");
		printf("1. Calculate Factorial\n");
		printf("2. Print Fibonacci Series\n");
		printf("3. Calculate GCD\n");
		printf("4. Exit\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);

		switch (choice){
		case 1:
			printf("Enter a Number: ");
			scanf("%d", &num);
			printf("Factorial of %d is %d", num, Fact(num));
			break;
		case 2:
			printf("Enter Term Number(N>=0): ");
			scanf("%d", &num);
			printf("Fibonacci Series\n");
			for (i = 0; i <= num; i++)
			{
				printf("%d ", Fibo(i));
			}
			break;
		case 3:
			printf("Enter Two Numbers: ");
			scanf("%d %d", &num, &num1);
			printf(" GCD(%d,%d) = %d", num, num1, GCD(num, num1));
			break;
		case 4:
			printf("Quitting");
			exit(0);

		default:
			printf("Invalid Choice! Please Try Again");
		}
	}

	return 0;
}