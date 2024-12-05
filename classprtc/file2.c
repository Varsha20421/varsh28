#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	FILE *fd1 = NULL;
	FILE *fd2 = NULL;
	char ch;
	fd1 = fopen("Test1.txt","r");
	if(fd1 == NULL)
	{
		perror("fopen:");
		return 1;
	}
	fd2 = fopen("Test2.txt","w");
	if(fd2 == NULL)
	{
		perror("fopen: ");
		return 1;
	}

	while((ch = fgetc(fd1))!=EOF)
		fputc(ch,fd2);
	
	fclose(fd1);
	fclose(fd2);

	return 0;
}
