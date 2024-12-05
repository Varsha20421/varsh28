#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/ipc.h>
#include <sys/msg.h>
/*
int main()
{
	key_t key = ftok("/home2/user67/classprtc/sysPro/day24",10010);
	printf("\n%u",key);
	// to get hexadecimal value use X
	printf("\n%X",key);

	printf("\n\n");
	return 0;
}
*/

int main()
{
	int msgid;
	msgid = msgget((key_t)102222,IPC_CREAT|0644); // first created queue's id will be 0 and next incremental by 1.
	printf("\nMSG queue created with %d id\n",msgid);

	printf("\n\n");
	return 0;
}
