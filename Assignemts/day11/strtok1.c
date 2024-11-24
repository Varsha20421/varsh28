#include <stdio.h>
#include <string.h>

#define MAX 50
int tokenise(char *);

int main()
{
	char arr[MAX];
	int r;
	fgets(arr,MAX,stdin); // To get string from user
	arr[strlen(arr)-1]='\0';
	r = tokenise(arr);
	if(r==-1)
		printf("No input");
	else
		printf("%d ",r);
	return 0;

}

int tokenise(char *arr)
{
	char *ptr = NULL;
	int c=0;
	ptr = strtok(arr," ");
	if(ptr == NULL)
		return -1;
	while(ptr!=NULL)
	{
		ptr = strtok(NULL," ");
		c++;
	}

	return c;

}

