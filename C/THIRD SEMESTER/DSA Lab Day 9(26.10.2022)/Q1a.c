#include<stdio.h>
#include <stdlib.h>

struct tree {
	int info;
	struct tree *left;
	struct tree *right;
}*root=NULL;

struct tree *insert(struct tree *root, int x) {
	if(root==NULL) {
		root=(struct tree*)malloc(sizeof(struct tree));
		root->info = x;
		root->left = NULL;
		root->right = NULL;
		return(root);
	}
	if(root->info > x)
	     root->left = insert(root->left,x); else {
		if(root->info < x)
			root->right = insert(root->right,x);
	}
	return(root);
}

void create(){
	while (1)
	{
		int ch,item;
		printf("\nPress 1 to insert a new element: ");
		scanf("%d",&ch);
		if (ch==1)
		{
			printf("Enter new element: ");
			scanf("%d",&item);
			root=insert(root,item);
		}
		else
		{
			break;
		}
	}
}


void inorder(struct tree *root) {
	if(root != NULL) {
		inorder(root->left);
		printf(" %d",root->info);
		inorder(root->right);
	}
	return;
}
void postorder(struct tree *root) {
	if(root != NULL) {
		postorder(root->left);
		postorder(root->right);
		printf(" %d",root->info);
	}
	return;
}
void preorder(struct tree *root) {
	if(root != NULL) {
		printf(" %d",root->info);
		preorder(root->left);
		preorder(root->right);
	}
	return;
}

struct tree *delet(struct tree *ptr,int x) {
	struct tree *p1,*p2;
	if(!ptr) {
		printf("\n Node not found ");
		return(ptr);
	} else {
		if(ptr->info < x) {
			ptr->right = delet(ptr->right,x);
		} else if (ptr->info >x) {
			ptr->left=delet(ptr->left,x);
			return ptr;
		} else {
			if(ptr->info == x) {
				if(ptr->left == ptr->right) {
					free(ptr);
					return(NULL);
				} else if(ptr->left==NULL) {
					p1=ptr->right;
					free(ptr);
					return p1;
				} else if(ptr->right==NULL) {
					p1=ptr->left;
					free(ptr);
					return p1;
				} else {
					p1=ptr->right;
					p2=ptr->right;
					while(p1->left != NULL)
						    p1=p1->left;
					p1->left=ptr->left;
					free(ptr);
					return p2;
				}
			}
		}
	}
	return(ptr);
}

struct tree * search(struct tree * root, int info)
{
	if (!root)
	{
		return NULL;
	}
	if (info == root->info)
	{
		return root;
	}
	if (info < root->info)
	{
		return search(root->left, info);
	}
	return search(root->right, info);
}

struct tree * searchMinimum(struct tree * root)
{
	if (!root) {
		return NULL;
	}
	while (root -> left != NULL)
	{
		root = root -> left;
	}
	return root;
}

struct tree * searchMaximum(struct tree * root)
{
	if (!root)
	{
		return NULL;
	}
	while (root -> right != NULL)
	{
		root = root -> right;
	}
	return root;
}

int main() {
	struct tree *res=NULL;
	int choice, item,item_no;
	do {
			printf("\n\t 0. Quit  ");
			printf("\n\t 1. Create ");
			printf("\n\t 2. In-Order Traversal");
			printf("\n\t 3. Pre-Order Traversal");
			printf("\n\t 4. Post-Order Traversal");
			printf("\n\t 5. Search");
			printf("\n\t 6. Find Smallest Element");
			printf("\n\t 7. Find Largest Element");
			printf("\n\t 8. Deletion");
			printf("\n\t Enter choice : ");
			scanf(" %d",&choice);
			if(choice<0 || choice>8)
			      printf("\n Invalid choice - try again");
		switch(choice) {
			case 0:
				return 0;
				break;
			case 1:
				create();
				break;
			case 2:
				printf("\n Inorder traversal of binary tree is : ");
				inorder(root);
				break;
			case 3:
				printf("\n Preorder traversal of binary tree is : ");
				preorder(root);
				break;
			case 4:
				printf("\n Postorder traversal of binary tree is : ");
				postorder(root);
				break;
			case 5:
				printf("Enter search term: ");
				scanf("%d",&item);
				res=search(root, item);
				if (res==NULL)
				{
					printf("Not Found!");
				}
				else
				{
					printf("Value found:\n",res->info);
					inorder(res);
				}
				break;
			case 6:
				res=searchMinimum(root);
				printf("Minimum Item: %d\n",res->info);
				break;
			case 7:
				res=searchMaximum(root);
				printf("Minimum Item: %d\n",res->info);
				break;
			case 8:
				printf("\n Enter the element to be deleted : ");
				scanf(" %d",&item_no);
				root=delet(root,item_no);
				inorder(root);
				break;
			case 9:
				printf("\n Enter new element: ");
				scanf("%d", &item);
				root= insert(root,item);
				printf("\n root is %d",root->info);
				printf("\n Inorder traversal of binary tree is : ");
				inorder(root);
				break;
		}
	}
	while(1);
	return(0);
}