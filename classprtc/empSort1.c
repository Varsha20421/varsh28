#include <stdio.h>
#include <string.h>

typedef struct library
{
    char title[100];
    char author[50];
    char genre[25];
}books;

void getDetails(books *b,char line[])
{
    char *ptr =NULL;
    ptr = strtok(line,",");
    while(ptr!=NULL)
    {
        strcpy(b->title, ptr);
        ptr = strtok(NULL,",");
        strcpy(b->author,ptr);
        ptr = strtok(NULL,",");
        strcpy(b->genre,ptr);
    }
}

void sortBooks(books *b,int N) // books b[]
{
    int i,j;
    for(i=0;i<N-1;i++)
    {
        for(j=0;j<N-i-1;j++)
        {
            //strcmp(b[i].genre,b[j].genre)
            if(strcmp((i+b)->genre,(j+b)->genre)>0)
            {
                books temp = *(i+b);
                *(i+b) = *(j+b);
                *(j+b) = temp;
            }
        }
    }
}

void printTitles(books *b,int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%s\n",b->title);
}

int main()
{
    int N;
    char input[200];
    books *b=NULL;
	books *temp=NULL;
    printf("Number of books:");
    scanf("%d",&N);
    scanf(" ");
    // How to get N number of lines, with each line having title,author,genre.
   // scanf("%[^\n]",input);
    while(N>0)
    {
		scanf("%s",input);
        N--;
    }
//	getDetails(b,input);
//	b++;
	temp = b;
	while(input!=NULL)
	{
		input[strlen(input)-1] = '\0';
		getDetails(b,input);
		b++;
	}
	b=temp;
	printTitles(b,N);

    sortBooks(b,N);
    printTitles(b,N);
    return 0;
}
