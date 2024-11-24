/*2. Write a program with a function read_extract_characters() to read a string (of max length 50 characters) from user, extract the characters at odd indices, store in an other array and return to the call. Caller should be able to read and display the extracted string.

[Note : do not return a local variable in function to caller]
*/
#include <stdio.h>
#include <string.h>
char * read_extract_characters(char *);
int main()
{
    char str[50];
    printf("Enter string");
    scanf("%s",str);
   // str[strlen(str)-1]='\0';
    read_extract_characters(str);
    return 0;
}

char * read_extract_characters(char *str)
{
    static char str1[50];
    int i,j;
    for(i=1,j=0;i<strlen(str);i+2,j++)
    {
        str1[j]=str[i];
    }
   // str1[strlen(str1)-1]='\0';
    printf("Array: %s ",str1);
}
