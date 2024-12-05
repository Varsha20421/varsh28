#include <stdio.h>
#include <stdlib.h>


typedef struct node
{
	int val;
	struct node *ptr; //Self referential pointer (SELF/SRP)
}NODE;


void printlist(NODE *);
int main()
{
	//creating nodes &allocated memory
	NODE h1,h2,h3,h4,h5,h6,h7;

	//ptr1 is used to navigate/tarverse between nodes
	NODE *ptr1=NULL;

	//initialize values to each node

	h1.val = 10;
	h1.ptr = NULL;

	h2.val = 20;
	h2.ptr = NULL;

	h3.val = 30;
	h3.ptr = NULL;

	printf("\nAddress of h1=%p",&h1);
	printf("\nAddress of h2=%p",&h2);
	printf("\nAddress of h3=%p",&h3);
	printf("\nAddress of ptr1=%p",&ptr1);

	printf("\nh1.value = %d and ptr = %p",h1.val,h1.ptr);
	printf("\nh2.value = %d and ptr = %p",h2.val,h2.ptr);
	printf("\nh3.value = %d and ptr = %p",h3.val,h3.ptr);

	printf("\ncontents of ptr1/ptr1 is poiting to:  %p",ptr1);

	//Making relationship 

	h1.ptr=&h2;
	h2.ptr=&h3;

	//travers
	ptr1 = &h1; //ptr1 is pointing to base address of list or first rec

	printf("\n%d",h1.val);
	printf("\n%d",ptr1->val);


	//ptr1=&h2;
	//ptr1=h1.ptr; // ptr1 is pointing to h2
	ptr1 = ptr1->ptr;
	printf("\n%d",ptr1->val);

	//ptr1=h2.ptr; //ptr1 is pointing to h3
	ptr1 = ptr1->ptr;
	printf("\n%d",ptr1->val);
	
	// create new node and init with values
	h4.val = 40;
	h4.ptr = NULL;
	
	h5.val = 50;
	h5.ptr = NULL;
	
	h6.val = 60;
	h6.ptr = NULL;

	h7.val = 70;
	h7.ptr = NULL;
	//inserting new node h4 between h1 and h2
	h1.ptr = &h4;
	h4.ptr = &h2;

	//inserting new node at end
	h3.ptr = &h5;

	//inserting new node at begging
	h6.ptr = &h1;

/*
	//again ptr1 is pointing base of address of list
	printf("\nNew list");

	ptr1 = &h1;
	printf("%d->",ptr1->val);

	//ptr1 = h1.ptr;
	ptr1 = ptr1->ptr;
	printf("%d->",ptr1->val);

	//ptr1 = h4.ptr;
	ptr1 = ptr1->ptr;
	printf("%d->",ptr1->val);

	//ptr1 = &h2.ptr;
	ptr1 = ptr1->ptr;
	printf("%d->",ptr1->val);

	//ptr1 = &h3.ptr;
	ptr1 = ptr1->ptr;
	if(ptr1==NULL)
		printf("NULL");
	else
		printf("\n%d:",ptr1->val);	
*/
	//printing new list using loops
	ptr1 = &h6;
	printf("\nNew list is\n");
	while(ptr1!=NULL)
	{
		printf("%d->",ptr1->val);
		ptr1 = ptr1->ptr;
	}
	printf("NULL");
	

	printf("\nh1.value = %d and ptr = %p",h1.val,h1.ptr);
	printf("\nh2.value = %d and ptr = %p",h2.val,h2.ptr);
	printf("\nh3.value = %d and ptr = %p",h3.val,h3.ptr);
	printf("\nh4.value = %d and ptr = %p",h4.val,h4.ptr);
	printf("\nh5.value = %d and ptr = %p",h5.val,h5.ptr);
	printf("\nh6.value = %d and ptr = %p",h6.val,h6.ptr);
		

	ptr1=&h6;
	printlist(ptr1);
	printf("\n\n");

	return 0;
}

void printlist(NODE *head)
{
	
	printf("\nNew list is using loops and function\n");
	while(head!=NULL)
	{
		printf("%d->",head->val);
		head = head->ptr;
	}
	printf("NULL");
	
}

