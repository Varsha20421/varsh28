/*Write a program to read a line of text containing 2 or more words, tokenize, display the words, concatenate the words using ‘_’ and display the final string. Consider line length of 80 characters. Provide a modular solution implementing following functions.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFF 150
char *process_string(char *);

int main()
{
	char line[81];
	char *str2;
	fgets(line,81,stdin);
	str2 = process_string(line);
	puts(str2);
	free(str2);

}
char *process_string(char *line)
{
	
	char *str = (char *)malloc(BUFF*sizeof(char));
	char *ptr = NULL;
	ptr = strtok(line," ");
	while(ptr!=NULL)
	{
		strcat(str,ptr);
		strcat(str,"_");
		ptr = strtok(NULL," ");
	}
	str[strlen(str)-1]='\0';
	return str;
}
