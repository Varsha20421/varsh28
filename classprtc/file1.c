#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	FILE *fd = NULL;
	char ch;
	fd = fopen("Test1.txt","r");

	if(fd == NULL)
	{
		perror("fopen: ");
		printf("\n%p\n",fd);
		exit(1);

	}
	printf("\nOpened file successfully %p \n",fd);

	// To read from a file
	while((ch=fgetc(fd))!=EOF)
	{
		putchar(ch);
	}

	// To write in to the file 
	//fputc(ch,fd);// intialize c with some character.


	fclose(fd);
	return 0;
}
