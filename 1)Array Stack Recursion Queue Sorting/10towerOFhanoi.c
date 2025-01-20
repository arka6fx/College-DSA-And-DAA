#include <stdio.h>

Tower(int n, char Beg, char Aux, char End){
	if (n == 1)
		printf("Move %c--->%c\n", Beg, End);
	else{
		Tower(n - 1, Beg, End, Aux);
		Tower(1, Beg, Aux, End);
		Tower(n - 1, Aux, Beg, End);
	}
}

int main(){
	int n;
	printf("Enter the no. of Disks: ");
	scanf("%d", &n);
	printf("Steps to Solve Tower of Hanoi consisting of %d Disks:  ", n);
	Tower(n, 'a', 'b', 'c');
	return 0;
}