#include <stdio.h>
#include <string.h>

typedef struct library
{
    char title[100];
    char author[50];
    char genre[25];
}books;

void getDeatils(books b[3],char line[])
{
    char *ptr =NULL;
    ptr = strtok(line,",");
    while(ptr!=NULL)
    {
        strcpy(b.title, ptr);
        ptr = strtok(NULL,",");
        strcpy(b.author,ptr);
        ptr = strtok(NULL,",");
        strcpy(b.genre,ptr);
    }
}

void sortBooks(books b[3],int N) // books b[]
{
    int i,j;
	books temp[3];
    for(i=0;i<N-1;i++)
    {
        for(j=0;j<N-i-1;j++)
        {
            //strcmp(b[i].genre,b[j].genre)
            if(strcmp(b[i].genre,b[j].genre)>0)
            {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }
}

void printTitles(books b[3],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%s\n",b.title);
}
int main()
{
    int N;
    char input[200];
    books b[3];
    printf("Number of books:");
    scanf("%d",&N);
    scanf(" ");
    // How to get N number of lines, with each line having title,author,genre.
//    scanf("%[^\n]",input);
    while(N>0)
    {
		scanf("%s",input);
        getDeatils(b,input);
        b++;
        N--;
    }
    sortBooks(b,N);
    printTitles(b,N);
    return 0;
}
