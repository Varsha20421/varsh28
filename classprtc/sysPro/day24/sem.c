#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <stdlib.h>
#include <string.h>
#include <sys/sem.h>

#define PERMS 0660

int main()
{
	int semid, nsem =0;
	key_t key = ftok("/home2/user67/classprtc/sysPro/day24",10211);

	nsem = 12;
	semid = semget(key,nsem,PERMS|IPC_CREAT);

	if(semid<0)
	{
		perror("semget()");
		exit(EXIT_FAILURE);
	}

	printf("Semaphore is created with ID %d",semid);

	printf("\n\n");
	

	return 0;
}
