#include <stdio.h>
#include <string.h>

char *search(char *);
void display(char *,int);
int main()
{
	char arr[50];
	fgets(arr,50,stdin);
	arr[strlen(arr)-1] = '\0';

	//char *a = arr;
	display(arr,strlen(arr));
	printf("\n");

	search(arr);
	display(arr,strlen(arr));
	printf("\n");
}

char *search(char *arr)
{
	int i;
	while(*arr!='\0')
	{
		if(*arr == 'a' || *arr == 'e' || *arr == 'i' || *arr == 'o' || *arr == 'u')
		{
			*arr='a';
		//	arr++;
			*arr='y';
		}
		arr++;
	}
	return arr;
}

void display(char *arr,int N)
{
	int i;
	for(i=0;i<N;i++,arr++)
		printf("%c",*arr);
}
