/*
Q1.

The first line contains an integer N, denoting the total number of books.
Next, N lines contain a string that denotes "title", "author", and "genre" separated by a comma.
Note: In code stub, you get 2D array books: where the 0th column denotes the title,
      the 1st column denotes the author, and the 2nd column denotes the genre

Input:

4
The Great Gatsby,F. Scott Fitzgerald,fiction
The Diary of a Young Girl,Anne Frank,non-fiction
Harry Potter and the Philosophers Stone,J.K. Rowling,children
The Catcher in the Rye,J.D. Salinger,fiction

Output:
Harry Potter and the Philosophers Stone
The Great Gatsby
The Catcher in the Rye
The Diary of a Young Girl

Explanation

The sorted genre is: [children, fiction, fiction, non-fiction].
*/
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
    int noBooks;
    int row=5,col=1024;
    printf("Enter no of books:\n");
    scanf("%d",&noBooks);
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
