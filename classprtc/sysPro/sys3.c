#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
/*
	fork();
	fork();// here 4 processes will generate
	fork();// here 8 processes will generate.... That means for 1 fork() -- 2, for 2 fork() -- 4 and for 3 fork() -- 8 and so on..... it means 2^(number of forks)
	printf("\nHello world\n");
*/

	int a=10; // if initiasilzed to static also means same.
	int pid;
	pid = fork();
	if(pid < 0)
	{
		printf("\nUnable to fork()");
		exit(EXIT_FAILURE);
	}
	else if(pid == 0)
	{
		a+=20;
		printf("\nChild a = %d\n",a);
	}
	else
	{
		a*=2;
		printf("\nParent a = %d\n",a);
	}
	printf("\nA = %d\n",a);
	return 0;
}
