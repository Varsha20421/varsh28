#include <stdio.h>
#include <stdlib.h>

typedef struct sEmployee
{
	int id;
	float sal;
	char g;
	char Name[20];
}sEmp;

typedef union uEmployee
{
	int id;
	float sal;
	char g;
	char Name[20];
}uEmp;

int main()
{
	sEmp es;
	uEmp eu;
	uEmp *eul = NULL;

	printf("Size of struct = %d",sizeof(es));
	printf("Size of union = %d",sizeof(eu));
    
	eu.id = 101;
	eu.sal = 10000;
	strcpy(eu.Name,"Varsha");
	//printf("\nId: %d",eu.id);
	printf("\nName = %s",eu.Name);

	eul = (uEmp *)malloc(sizeof(uEmp));

	eul->id = 102;
	printf("\nId: %d",eul->id);
	printf("\n\n");

	return 0;
}
