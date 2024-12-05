#ifndef EMP_H
#define EMP_H

typedef struct Employee
{
	int id,
	int phno,
	int sal;
	char Name[BUFF];
	char g;
	struct *next = NULL;
}NODE;

//prototyping

NODE *createNode(Node *);
int dispMainMenu();
void printList(NODE *);
NODE *appendNode(NODE *, NODE *);
NODE *addNodeBeg(NODE *,NODE *);
int delNode(NODE *,int);
int delNodeBeg(NODE *);
int delNodeEnd(NODE *);

int getDetails(NODE *, char []);
int printDetails(NODE *);

#endif
