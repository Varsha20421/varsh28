#include <stdio.h>
#include <stdlib.h>

typedef struct Employee
{
	int id;
	int phno;
	int sal;
	char Name[50];
	char g;
	struct Employee *next;
}EMP;

int main()
{
	NODE *nn = NULL;
}

NODE *createNode(NODE *nn)
{
	nn = (NODE *)malloc(sizeof(NODE));
	printf("\nEnter id of employee: ");
	scanf("%d",&nn->id);

	printf("\nEnter phno of employee: ");
	scanf("%d",&nn->phno);
	
	printf("\nEnter sal of employee: ");
	scanf("%d",&nn->sal);
	
	printf("\nEnter id of employee: ");
	scanf("%d",&nn->Name);
	
	printf("\nEnter id of employee: ");
	scanf("%d",&nn->g);
	
	nn->next = NULL;

	return nn;
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

int printDetails(EMP *head)
{
	if(head == NULL)
	{
		//the list is empty
		printf("\nList is Empty\n");
		return 0;
	}
	while(head!=NULL)
	{
		printf("\nEmployee Details are\n");
		printf("\n===============================\n");
		printf("\nID: %d",head->id);
		printf("\nName: %s",head->Name);
		printf("\nGender: %c",head->g);
		printf("\nPhNo: %d",head->phno);
		printf("\nSalary: %d",head->sal);
		printf("\n===============================\n");
		printf("\n->\n");
		head = head->next;
	}
	printf("NULL");
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
