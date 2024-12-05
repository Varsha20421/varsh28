#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int val;
	struct node *next; //Self referencial pointer (SELF/SRP)
}NODE;


NODE *createNode(NODE *);
int dispMainMenu();
void printList(NODE *);
NODE* appendNode(NODE *,NODE *);
NODE *addNodeBeg(NODE *, NODE *);
int delNode(NODE *, int);


int main()
{
	NODE *nn=NULL;
	NODE *head=NULL,*temp=NULL;
	int flag=0;
	int key=0;

	while(1)
	{
		switch(dispMainMenu())
		{
			case 1:
					nn = createNode(nn);
					head = addNodeBeg(head,nn);
					break;
			case 2:
					nn = createNode(nn);
					head = appendNode(head,nn);
					break;
			case 3:
					printf("\nEnter the key of the node: ");
					scanf("%d",&key);
					delNode(head,key);
					break;
			case 4:
					printList(head);
					break;
			case 5:
					flag = 1;
					break;
			default:
					printf("\nEnter the correct Choice");
					break;
		}
		if(flag == 1)
			break;
	}
	
	printf("\n\n");

	return 0;

}

int getDetails(EMP *e, char line[])
{
	char *token = NULL;
	token = strtok(line,"|");
	if(token != NULL)
	{
		e->id = atoi(token);
		token = strtok(NULL,"|");
		strcpy(e->Name,token);
		token = strtok(NULL,"|");
		e->g = *token;
		token = strtok(NULL,"|");
		e->phno = atoi(token);
		token = strtok(NULL,"|");
		e->sal = atoi(token);
		return 0;
	}
	return 1;
}

int printDetails(EMP *e)
{
	printf("\nEmployee Details are\n");
	printf("\n===============================\n");
	printf("\nID: %d",e->id);
	printf("\nName: %s",e->Name);
	printf("\nGender: %c",e->g);
	printf("\nPhNo: %d",e->phno);
	printf("\nSalary: %d",e->sal);
	printf("\n===============================\n");
}



NODE *createNode(NODE *nn)
{
	nn = (NODE *)malloc(sizeof(NODE));
	printf("\nEnter the value of New Node: ");
	scanf("%d",&nn->val);
	nn->next = NULL;
	return nn;
}


int dispMainMenu()
{
	int ch;
	printf("\nLinked List Menu\n");
	printf("\nPress,");
	printf("\n1. Add Node in Begning");
	printf("\n2. Add Node to the End");
	printf("\n3. Delete a Node");
	printf("\n4. Print List");
	printf("\n5. Exit");
	printf("\nChoice: ");
	scanf("%d",&ch);

	return ch;
}


void printList(NODE *head)
{

	if(head == NULL)
	{
		//the list is empty
		printf("\nList is Empty\n");
		return;
	}
	printf("\nList is\n===================================\n");
	while(head!= NULL)
	{
		printf("%d->",head->id);
		
		head = head->next;	

	}
	printf("NULL");
	printf("\n\n===================================\n");
}



NODE *appendNode(NODE *head,NODE *nn)
{
	// printf("\nIn appendNode\n");
	NODE *temp = head;

	if(head == NULL)
	{
		//the list is empty
		printf("\nList is Empty\n");
		head = nn;
		temp = nn;
	}
	else
	{
		// printf("\nList is not empty\n");
		while(head->next!= NULL)
		{
			// printf("%d->",head->val);
			head = head->next;	
		}
		
		head->next = nn; //adding node to the end of the list
	}
	head = temp; //head is again pointed to the BA

	return head;
}


NODE *addNodeBeg(NODE *head, NODE *nn)
{
	NODE *temp = head;
	// printf("\nIn addNodeBeg\n");
	if(head == NULL)
	{
		//the list is empty
		printf("\nList is Empty\n");
		head = nn;
		temp = nn;
	}
	else
	{
		nn->next = head;
		head = nn;     // making the head point to the nn(BA of new list)
	}
	return head; //return the BA of the list
}


int delNode(NODE *head, int key)
{
	int flag = 1;

	NODE *temp = head;


	while(head!=NULL)
	{
		if(head->val == key)
		{
			//found
			flag = 0;
			break;
		}
		temp = head;
		head = head->next;
	}	

	if(flag == 0)
	{
		
		temp->next = head->next;
	}

	return flag;


}
