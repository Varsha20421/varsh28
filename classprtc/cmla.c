#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFF 1024
#define OR ||
int main(int argc, char *argv[])
{
	//int i;
	FILE *fp;
	char fileName[BUFF];
	char lines[BUFF];

	printf("\nNo of args = %d",argc);

	if((argc<2) OR (argc>2))
	{
		fprintf(stderr,"\nConfig is missing");
		fprintf(stderr,"\n ./app configig.csv\n\n");
		return 1;
	}
	
	strcpy(lines);

	
/*
	for(i=0;i<argc;i++)
		printf("\nargv[%d] = %s",i,argv[i]);
*/	
	printf("\n\n");
	return 0;
}

