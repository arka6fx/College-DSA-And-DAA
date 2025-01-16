#include <stdio.h>
#include <stdlib.h>
#define N 50

int insert(int arr[],int n){
	int data,pos,i;
	printf("Enter the Data: ");
	scanf("%d",&data);
	printf("Enter the Position: ");
	scanf("%d",&pos);
	for(i=n;i>pos;i--){
		arr[i]=arr[i-1];
	}
	arr[pos]=data;
	n++;
	return n;	
}

int delete(int arr[],int n ){
	int pos,i;
	printf("Enter the Position:");
	scanf("%d",&pos);
	for(i=pos;i<n-1;i++){
		arr[i]=arr[i+1];
	}
	n--;
	return n;
}

void display(int arr[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}

int main()
{
    int arr[N],choice,n,i;
    printf("\n-----Array for Organizing & Managing Data-----\n");
    printf("Enter the no. of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    while(1){
        printf("\nMenu: \n");
        printf("1. Insert an Element\n");
        printf("2. Delete an Element\n");
        printf("3. Display the Array\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        
        switch(choice){
        	case 1: n = insert(arr,n);       	        
        	        break;
        	case 2: n = delete(arr,n);
			        break;
			case 3: display(arr,n);
			        break;
			case 4: printf("Quitting");
			        exit(1);
			default: printf("Invalid Choice! Try again ");				        
            
        }
        
       
    }
    
    
    
    
    
    

    return 0;
}