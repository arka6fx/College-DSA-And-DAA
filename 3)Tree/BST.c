#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *left;
	struct node *right;
};

struct node *createNode(int data){
	struct node *newNode = (struct node *)malloc(sizeof(struct node));
	newNode->data = data;
	newNode->left = newNode->right = NULL;
	return newNode;
}

void inorder(struct node *root){
	if (root == NULL){
		return;
	}
	inorder(root->left);
	printf("%d ", root->data);
	inorder(root->right);
}

void preorder(struct node *root){
	if (root == NULL){
		return;
	}
	printf("%d ", root->data);
	preorder(root->left);
	preorder(root->right);
}

void postorder(struct node *root){
	if(root == NULL){
		return;
	}
	postorder(root->left);
	postorder(root->right);
	printf("%d ", root->data);
}

struct node *insertNode(struct node *root, int data){
	if (root == NULL){
		return createNode(data);
	}
	else if (data < root->data){
		root->left = insertNode(root->left, data);
	}
	else{
		root->right = insertNode(root->right, data);
	}
	return root;
}

int main(){
	struct node *root = NULL;
	int choice, data;
	while (1){
		printf("\n-----Binary Search Tree Menu-----\n");
		printf("1. Insert a Node\n");
		printf("2. Inorder Traversal\n");
		printf("3. Preorder Traversal\n");
		printf("4. Postorder Traversal\n");
		printf("5. Exit\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);

		switch (choice){
		case 1:
			printf("Enter the value to insert: ");
			scanf("%d", &data);
			root = insertNode(root, data);
			break;
		case 2:
			printf("Inorder Traversal: ");
			inorder(root);
			break;
		case 3:
			printf("Preorder Traversal: ");
			preorder(root);
			break;
		case 4:
			printf("Postorder Traversal: ");
			postorder(root);
			break;
		case 5:
			printf("Exiting...\n");
			exit(0);
		default:
			printf("Invalid choice. Please try again.\n");
		}
	}

	return 0;
}