#include <stdio.h>
#include <stdlib.h>


int main()
{
    int m,n,i,j;
    printf("Enter the no. of Rows: ");
    scanf("%d", &m);
    printf("Enter the no. of Columns: ");
    scanf("%d", &n);
    int arr[m][n],trans[n][m];
    
    printf("Enter the Elements: ");
    for(i=0;i<m;i++){
    	for(j=0;j<n;j++){	
        scanf("%d",&arr[i][j]);
		}
	}
    
    for(i=0;i<n;i++){
    	for(j=0;j<m;j++){
    		trans[i][j]=arr[j][i];
		}
	}
	
	printf("\nOriginal Matrix\n");
	for(i=0;i<m;i++){
    	for(j=0;j<n;j++){
    		printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	
	printf("\nTranspose Matrix\n");
	for(i=0;i<n;i++){
    	for(j=0;j<m;j++){
    		printf("%d ",trans[i][j]);
		}
		printf("\n");
	}
    
    
    
    

    return 0;
}