#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define BUFFER 102

typedef struct Employee{
	int id;
	int sal;
	int phno;
	char Name[20];
	char Gender;
}EMP;

int getDetails(EMP *,char []);
int printDetails(EMP *);

int main()
{
	FILE *db;
	EMP *e = NULL;
	EMP *temp = NULL;
	char line[BUFFER];
	int i;

	db = fopen("databas.txt","r");
	if(db == NULL)
	{
	perror("fopen: ");
	return 1;
	}
	e = (EMP *)malloc(5*sizeof(EMP));
	temp =e;

	memset(line,'\0',BUFFER);

	while(fgets(line,BUFFER,db)!=NULL)
	{
		line[strlen(line)-1]='\0';
		getDetails(e,line);
		e++;
	}

	e = temp;
	for(i=0;i<5;i++,e++)
		printDetails(e);
	
	printf("\n\n");
//	fclose(db);

	return 0;
}

int getDetails(EMP *e, char line[])
{
	char *ptr = NULL;
	ptr = strtok(line,"|");
	if(ptr!=NULL)
	{
	e->id = atoi(ptr);
	ptr = strtok(NULL,"|");
	strcpy(e->Name,ptr);
	ptr = strtok(NULL,"|");
	e->Gender = *ptr;
	ptr = strtok(NULL,"|");
	e->phno = atoi(ptr);
	ptr = strtok(NULL,"|");
	e->sal = atoi(ptr);
	return 0;
	}
	return 1;

}

int printDetails(EMP *e)
{
	printf("\nEmployee Details are:");
	printf("\nId: %d",e->id);
	printf("\nName: %s",e->Name);
	printf("\nName: %c",e->Gender);
	printf("\nName: %d",e->phno);
	printf("\nName: %d",e->sal);

	printf("\n\n");
}





