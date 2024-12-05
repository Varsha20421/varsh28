#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>

int main()
{
	pid_t id = fork();
	id = fork();
	if(id==0)
	{
		printf("I am child PID : %d",getpid());
		printf("\nChild's parent PPId: %d",getppid());
		printf("\nChild's Process Id: %d",id);
	}
	else
	{
		wait(0);
		printf("I am parent PID : %d",getpid());
		printf("\nparent's PPId: %d",getppid());
		printf("\nChild's Process Id: %d",id);
	}
	printf("\nHello World %d",getppid());
	printf("\n\n");
}
