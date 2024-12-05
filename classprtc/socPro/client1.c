#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>


#define PORTNO 4013
#define MAXBUFF 1024

typedef struct Employee
{
	int id;
	int phno;
	int sal;
	char Name[50];
	char g;
}EMP;

int getDetails(EMP *, char []);

int main()
{
	int sfd = 0, retValue=0;
	
	EMP *e = NULL;
	struct sockaddr_in serv_address;

	char msg[MAXBUFF] = {0,};

	sfd = socket(AF_INET,SOCK_STREAM,0);

	if(sfd < 0)
	{
		perror("socket() ");
		exit(EXIT_FAILURE);
	}
	printf("\nSocket created with sockfd : %d",sfd);

	//reset/set address of client 

	memset(&serv_address,'\0',sizeof(serv_address));

	// setting of Server side ipaddress and port no
	serv_address.sin_family = AF_INET;
	serv_address.sin_port = htons(PORTNO);
	serv_address.sin_addr.s_addr = INADDR_ANY;

	retValue = connect(sfd,(struct sockaddr *)&serv_address, sizeof(serv_address));

	if(retValue < 0)
	{
		perror("connect()");
		exit(EXIT_FAILURE);
	}

	printf("\nClient: Connected to the server\n");


	// strcpy(msg,"\nHi This is from Client\n");
	while(1){
		fgets(msg,MAXBUFF,stdin);
		getDetails(e,msg); // meed to do some logic here
		write(sfd,e,MAXBUFF);
		/*if(strcmp(msg,"bye\n")==0)
		{
			close(sfd);
			break;
		}
		memset(msg,'\0',MAXBUFF);
		*/
	}
	
	 close(sfd);

	return 0;
}

int getDetails(EMP *e, char line[])
{
	char *token = NULL;
	token = strtok(line,"|");
	if(token != NULL)
	{
		e->id = atoi(token);
		token = strtok(NULL,"|");
		strcpy(e->Name,token);
		token = strtok(NULL,"|");
		e->g = *token;
		token = strtok(NULL,"|");
		e->phno = atoi(token);
		token = strtok(NULL,"|");
		e->sal = atoi(token);
		return 0;
	}
	return 1;
}
