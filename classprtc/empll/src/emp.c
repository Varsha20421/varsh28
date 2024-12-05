#include <common.h>
#include <emp.h>

int getDetails(NODE *e, char line[])
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

int printDetails(NODE *e)
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

EMP *appendNode(NODE *head,EMP *nn)
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
		// printf("%d->",head->val);
		printDetails(head);
		head = head->next;
	}
	printf("\nEND OF Records\n");
	printf("\n\n===================================\n");
}

NODE *createNode(NODE *nn)
{
	nn = (NODE *)malloc(sizeof(NODE));

	printf("\nEnter the value of id:  ");
	scanf("%d",&nn->id);

	printf("\nEnter the value of Name:  ");
	scanf("%s",&nn->Name;

	printf("\nEnter the value of Gender:  ");
	scanf("%c",&nn->g);

	printf("\nEnter the value of phno:  ");
	scanf("%ld",&nn->phno);

	printf("\nEnter the value of id:  ");
	scanf("%d",&nn->sal);

	nn->next = NULL;
	return nn;
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

NODE *delNodeBeg(NODE *head)
{
	NODE *temp = head;
	if(head==NULL)
	{
		printf("Line is empty,cannot delter");
		retrun 1;
	}
	head->next = NULL;
	temp = temp->next;
	head = temp;
	
	return head;
}

NODE *delNodeEnd(NODE *head)
{
	NODE *temp = head;
	if(head==NULL)
	{
		printf("\nList is Empty,cannot delete");
		return 1;
	}
	while(head!=NULL)
	{
		if(head->next==NULL)
		{
			temp->next=NULL;
		}
		temp = head;
		head = head->next;
	}
}
