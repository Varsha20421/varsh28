#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char *argv[])
{
	//int ret = 0;
	printf("\nIn the Sysprg6.c\n");

	execl(argv[2],argv[3],argv[4],argv[5],argv[6],(char *)0);
	printf("no print\n");
	printf("\n");

	return 0;
}

