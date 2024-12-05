#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
	// this is to know pid and ppid
	/*long int i;
	int pid = getpid();
	printf("My own pid %d\n",pid);
	//getchar();
//	for(i=0;i<99999;i++)
//	{
//		printf("%ld",i);
//	}

	pid_t ppid = getppid();
	printf("for %d parent is %d",pid,ppid);
	getchar();*/

	// for fork
	printf("I am parent and my id is%d\n",getpid());
	printf("\nparents PPID %d",getppid());
	pid_t id = fork();
	printf("\nHello World\n");
//	printf("\nI am child");
	printf("\nPID: %d",getpid());
	
	printf("\nparents1 PPID %d",getppid());
	printf("\n\n");
}
