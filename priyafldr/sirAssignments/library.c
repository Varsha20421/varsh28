#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void bubbleSort(char ***books, int N) {
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (strcmp(books[j][2], books[j + 1][2]) > 0) {
                char *temp[3];
                for (int k = 0; k < 3; k++) {
                    temp[k] = books[j][k];
                    books[j][k] = books[j + 1][k];
                    books[j + 1][k] = temp[k];
                }
            }
        }
    }
}
int main() {
    char ***Books = NULL;
    int i,j;
    int noBooks=2,row=5,col=1024;
    //creating pointer of arrays which points to different names
    Books = (char ***)malloc(noBooks*sizeof(char **)); 
    //allocate mem for each string and assign address of each string to each pointer(names) returned by malloc
    for(i=0;i<noBooks;i++)
    {
        Books[i] = (char **)malloc(3 * sizeof(char *));
        for(j=0;j<row;j++)
            Books[i][j] = (char *)malloc(col*sizeof(char *));
    }
    printf("Enter book details (title, author, genre):\n");
    for(i=0;i<noBooks;i++)
    {
       char input[col* row];
 
        printf("Book %d: ", i + 1);
        fgets(input, sizeof(input), stdin);
        input[strlen(input)-1] = '\0';
 
        char *title = strtok(input, ",");
        char *author = strtok(NULL, ",");
        char *genre = strtok(NULL, ",");
 
        if (title) 
            strncpy(Books[i][0], title, col);
        if (author) 
            strncpy(Books[i][1], author, col);
        if (genre) 
            strncpy(Books[i][2], genre, col);
    }
    bubbleSort(Books,noBooks);
    for(i=0;i<noBooks;i++)
    {
        printf("%s\n",Books[i][0]);
    }
 
    return 0;
}
