#include <stdio.h>
int main(){
	int n,i,j,flag,temp;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elemens of the array: \n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	for(i=1;i<=n-1;i++){
		flag=0;
		for(j=1;j<=n-i;j++){
			if(arr[j-1]>arr[j]){
				temp=arr[j-1];
				arr[j-1]=arr[j];
				arr[j]=temp;
				flag=1;
			}
		}
		if(flag==0){
			break;
		}
	}
	
	printf("Your sorted array is: ");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}
