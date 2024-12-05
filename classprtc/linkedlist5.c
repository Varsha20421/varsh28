#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int val;
	struct node *ptr;
}NODE;

int deleteNode(NODE *,int);

int main()
{

	NODE n1,n2,n3,n4;

	NODE *ptr1=NULL;

	n1.val - 10;
	n1.ptr = NULL:

	n2.val = 20;
	n2.ptr = NULL;
	
	n3.val = 30;
	n3.ptr = NULL;

	n4.val = 40;
	n4.ptr = NULL;

	n1.ptr = &n2;
	n2.ptr = &n3;
	n3.ptr = &n4;

	ptr1 = &n1;
}

int deleteNode(NODE *head, int key)
{
	int flag=1;
	NODE *temp = NULL;

	while(head!=NULL)
	{
		if(head->val==key)
		{
			flag = 0;
			break;
		}
		temp = head;
		head = head->ptr;
	}

	if(flag==0)
	{
		temp->ptr = head->ptr;
	}
	return flag;
}
