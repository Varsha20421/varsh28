#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void printHello();
int main()
{
	pthread_t tid;
	int status = 0;
	//&tid -- passing reference
	printf("In the main function");
	printf("\nI am Main program/process/Mainthread");
	status = pthread_create(&tid,NULL,printHello,NULL);
	pthread_join(tid,NULL);// alternate way is to use sleep(time) main for some time  sleep(1) -- main program waits for 1 second.

	printf("\nAfter completing (main)");

	return 0;

}

void printHello()
{
	printf("\nHelloworld\n");
}
