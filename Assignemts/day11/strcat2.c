#include <stdio.h>
#include <string.h>

char *strncati(char *,char *,int);

int main()
{
	char dest[50];
	char src[25];

	fgets(dest,50,stdin);
	dest[strlen(dest)-1]='\0';

	fgets(src,25,stdin);
	src[strlen(src)-1]='\0';

	char *a=dest;
	char *b=src;

	strncati(a,b,strlen(b));
	printf("%s",a);
	printf("\n");
	return 0;
}

char *strncati(char *dest,char *src,int N)
{
	int i;
	while(*dest!='\0')
		dest++;
	for(i=0;i<N;i++)
	{
		*(dest) = *(src);
		dest++;
		src++;
	}	
	*dest='\0';

	return dest;
}
