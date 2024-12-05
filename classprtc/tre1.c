#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node *l;
	struct node *r;
}NODE;

NODE *createNode(int val)
{
	NODE *nn = (NODE *)malloc(sizeof(NODE));
	nn->data = val;
	nn->l = NULL;
	nn->r = NULL;

	return nn;
}

NODE *insertNode(NODE *root, int val)
{
	if(root==NULL)
	{
		//return nn;
		return createNode(val);
	}
	if(root->data < val)
	{
		//right sub tree
		root->r = insertNode(root->r,val);

	}
	else if(root->data > val)
	{
		//left sub tree
		root->l = insertNode(root->l,val);
	}
	else
	{
		printf("\n%d duplicate value found, Hence ignore\n",val);
	}
	return root;
}

void inOrderTrav(NODE *root)
{
	if(root==NULL)
		return ;
	//left
	inOrderTrav(root->l);
	//Node
	printf(" %d ",root->data);
	//Right
	inOrderTrav(root->r);
}

void preOrderTrav(NODE *root)
{
	if(root==NULL)
		return;
	printf(" %d ",root->data);
	preOrderTrav(root->l);
	preOrderTrav(root->r);
}

void postOrderTrav(NODE *root)
{
	if(root==NULL)
		return;
	postOrderTrav(root->l);
	postOrderTrav(root->r);
	printf(" %d ",root->data);
}

int main()
{
	NODE *root = NULL;

	root = insertNode(root,5);
	insertNode(root,10);
	insertNode(root,3);
	insertNode(root,4);
	insertNode(root,8);
	insertNode(root,1);
	insertNode(root,2);
	insertNode(root,13);

	printf("\nIn order Traversal\n");
	inOrderTrav(root);
	printf("\nPre Order Traversal\n");
	preOrderTrav(root);
	printf("\nPost Order Traversal\n");
	postOrderTrav(root);
	printf("\n\n");
	return 0;
}
