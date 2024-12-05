#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(int argc, char *argv[])
{
	int a;
	printf("\nIn the sysPrg6.c\n");

	if(argv[1][0] == '+')
	{
		a = atoi(argv[2]) + atoi(argv[3]);
		printf("%s + %s= %d",argv[2],argv[3],a);
	}
	
	else if(argv[1][0] == '-')
	{
		a = atoi(argv[2]) - atoi(argv[3]);
		printf("%s - %s = %d",argv[2],argv[3],a);
	}

	else if(argv[1][0] == 'X')
	{
		a = atoi(argv[2]) * atoi(argv[3]);
		printf("%s * %s = %d",argv[2],argv[3],a);
	}
	
	else
	{
		a = atoi(argv[2]) / atoi(argv[3]);
		printf("%s / %s = %d",argv[2],argv[3],a);
	}

//	execl(argv[1],argv[2],argv[3],(char *)0);
//	printf("\nThis line will not printf\n\n");

	return 0;
}

