#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
	printf("\nThis is sProg04\n");
/*	if(fork()>0)
	{
		wait(0);
		printf("\nProg04 PID: %d",getpid());
	}
	else*/
		execl("/bin/ls","/bin/ls",(char *)0); // excel(path,arg,(char *)null)
	printf("\nEnding sProg04");

	printf("\n\n");
	return 0;
}
