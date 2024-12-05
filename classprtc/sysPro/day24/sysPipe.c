#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>

#define BUFF 1024
int main()
{
	int fd[2];
	int status;
	pid_t cpid;
	char line[BUFF];

	pipe(fd);

	cpid = fork();
	if(cpid == 0)
	{
		//child process
		/*
		close(fd[0]);//Reading is closed
		write(fd[1],"Hello World",12);
		exit(EXIT_SUCCESS);*/
		close(fd[1]);
		read(fd[0],line,BUFF);
		printf("\nLine Read\n%s",line);
	}
	else
	{
		//parent process
//		wait(&status);
		/*
		printf("\nChild with %d pid exited with status = %d\n",cpid,(status));
		close(fd[1]);//Writing is closed
		read(fd[0],line,BUFF);
		printf("\nLine Read\n%s",line);
		*/

		close(fd[0]);
		write(fd[1],"Hello World",12);
	}
	printf("\nEnd of program\n");
	return 0;
}
