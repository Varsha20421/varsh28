#include <stdio.h>

int main() {
    

    return 0;
}
struct Employee
{
    char eName[20];
    char eGender;
    //char eAddress[20];
    int eId;
    float eSal;
};

typedef struct Employee EMP;

void scanEmployee(EMP e[],int n)
{
    int i;
    printf("\nEnter Employee Details\n");
    for(i=0;i<n;i++)
    {
        printf("\nName: ");
        scanf("%s",e[i].eName);
        printf("\nID: ");
        scanf("%d",&e[i].eId);
        printf("\nGender: ");
        scanf(" ");
        scanf("%c",&e[i].eGender);
        printf("\nSalary: ");
        scanf("%f",&e[i].eSal);
    }
}

void dispEmployee(EMP e[],int n)
{
    int i;
    printf("\n Employee details are\n");
    for(i=0;i<n;i++)
    {
       // printf("Employee details are\n");
        printf("\n========================\n");
        printf("\nID: %d",e[i].eId);
        printf("\nName: %s",e[i].eName);
        printf("\nGender: %c",e[i].eGender);
        printf("\nSalary: %f",e[i].eSal);
        printf("\n========================\n");
    }
}

Employee* searchByName(Emp e[],int n, char *lname)
{
    int i;
    for(i=0;i<n;i++)
    {
		char *ptr = strtok(e[i].eName," ");
		while(ptr!=NULL)
		{
        	if(strcmp(ptr,lname)==0)
            	return &e[i];
			ptr = strtok(NULL," ");
		}
    }
    return NULL:
}

Employee* searchById(Emp e[],int n, int id)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(e[i].eId == id)
            return &e[i];
    }
    return NULL;
}

int SalaryRange(Emp e[],int n, float min, float max)
{
    int i,count=0;
    for(i=0;i<n;i++)
    {
        if(e[i].eSal >= min && e[i].eSal <=max)
            count++;
    }
    return count;
}

void EmployeeName(Emp e[],int n, int id, char *newName)
{
	for(i=0;i<n;i++)
	{
		if(e[i].id == id)
		{
			strcpy(e[i].eName,newName);
			break;
		}
	}
}
