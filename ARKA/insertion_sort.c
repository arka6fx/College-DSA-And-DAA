#include <stdio.h>
int main(){
	int n,i,j,flag,temp,min;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elemens of the array: \n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	for(i=1;i<n;i++){
		temp = arr[i];
		j=i-1;
		while(j>=0 && arr[j]>temp){
			arr[j+1]=arr[j];
			j--;
		}
		j++;
		arr[j]=temp;
	}
	
	printf("Your sorted array is: ");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}
