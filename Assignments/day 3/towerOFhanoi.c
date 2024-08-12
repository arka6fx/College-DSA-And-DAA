#include<stdio.h>
void tower(int n,char Beg,char Aux,char End){
	 if(n<=0) printf("Invalid no. of disk taken!");
	 else if (n==1) printf("Move form %c--->%c\n", Beg, End);
	 else{
	 	tower(n-1,Beg,End,Aux);
	 	tower(1,Beg,Aux,End);
	 	tower(n-1,Aux,Beg,End);
	 }
}
int main(){
	char a,b,c;
	int n;
	printf("Enter the number of disk:");
	scanf("%d",&n);
	printf("The tower of hanoi of %d disk:\n",n );
	tower(n,'a','b','c');
}
