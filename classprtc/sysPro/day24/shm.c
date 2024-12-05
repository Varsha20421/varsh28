#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>
#include <signal.h>
#include <sys/ipc.h>
#include <sys/types.h>
#include <string.h>
#include <sys/shm.h>

#define PERMS 0666
#define MAXBUFF 1024
typedef struct Employee
{
	int id;
	int sal;
	char name[MAXBUFF];
}EMP;

int main()
{
	key_t key;
	EMP *e = NULL;
	int shmid;
	char *msg;

	shmid = shmget(key,sizeof(EMP)*1,PERMS|IPC_CREAT);

	if(shmid<0)
	{
		perror("shmget()");
		printf("\nDirectly use this shm mem to read and write");
		exit(EXIT_FAILURE);
	}
	printf("\nShared mem id = %d\n",shmid);

	e = (EMP *)shmat(shmid,(void *)0,0);

	printf("\nEnter emp details\n");
	printf("\nEnter name: ");
	scanf("%[^\n]s",e->name);
	
	printf("\nEnter id: ");
	scanf("%d",&e->id);
	
	printf("\nEnter sal: ");
	scanf("%d",&e->sal);
	shmdt(e);

	return 0;

}

