#include<stdio.h>
#include<stdbool.h>
void linear_srch(int arr[],int n){
	int value,i,pos;
	printf("Enter the value to search: ");
	scanf("%d",&value);
	bool flag = false;
	for(i=0;i<n;i++){
		if(arr[i]==value){
			pos = i;
			flag = true;
			printf("Your search element is at %d index.",i);
			break;
		}
	}
	if (flag == false){
		printf("your search element is not present:");
	}
}
void binary_srch(int arr[],int n){
	int l_b = 0;
	int value,pos;
	bool flag = false;
	int u_b = n-1;
	printf("Enter the value to search: ");
	scanf("%d",&value);
	int mid= (l_b+u_b)/2;
	while(u_b<=l_b){
		if(arr[mid]== value) {
		      pos= mid;
		      flag = true;
			  printf("Your search element is at %d index.",pos);
			  return;
		}
		else if(arr[mid]>value){
			l_b = mid-1;
		}
		else{
			u_b = mid+1;
		}
		
	}
    if (flag == false){
	printf("your search element is not present:");
	}
}
int main(){
   int n,i,choice;
   printf("Enter the size of array:");
   scanf("%d",&n);
   int arr[n];
   printf("Enter the elements of the array in sorted way:");
   for(i=0;i<n;i++){
   	scanf("%d",&arr[i]);
   }
   
   while(1){
   printf("\nMenu:\n");
   printf("1.Linear Search\n");
   printf("2.Binary Search\n");
   printf("3.Exit\n");
   printf("Enter your choice: \n");
   scanf("%d",&choice);
   	 switch(choice){
   	 	case 1: linear_srch(arr,n);
   	 	        break;
   	 	case 2: binary_srch(arr,n);
   	 	        break;
		case 3: return 0;
		default: printf("Invalid choice!");
			
   	
   	 }
   }
   
   
   return 0;  
}
