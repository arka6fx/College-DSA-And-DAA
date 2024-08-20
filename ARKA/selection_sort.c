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
	
	for(i=0;i<n-1;i++){
		temp=arr[i];
		min=i;
		for(j=i+1;j<n;j++){
			if(arr[j]<arr[min]){
				min=j;
			}
		}
		if(min!=i){
			temp=arr[min];
			arr[min]=arr[i];
			arr[i]=temp;
		}
	}
	
	printf("Your sorted array is: ");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}
