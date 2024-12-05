/*
Write a program to read contents from store them in employee record from command line to suppy the data base file.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv)
{	
	FILE *fp;
	if((argc<2)||(argc>2))
	{
		fprintf(stderr,"Config file is missing or more than 1 file");
		fprintf(stderr,"./app configFile.csv");
		return 1;
	}

	fp = fopen("databas.txt","r");
	
	fclose(fp);


	return 0;
}
