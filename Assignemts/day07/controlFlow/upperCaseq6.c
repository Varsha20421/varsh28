/*3. Write a program to continuously read a string of maximum length 80 chars, End the program if string is END, else convert to upper case, display and continue. (use while)
*/
#include <stdio.h>
#include <string.h>
char toUpper(char c)
{
    if(c>='a' && c<='z')
        return c-('a'-'A');
    return c;
}

int main()
{
    char str[81];
    int i;
    
    while(1)
    {
        printf("\nEnter string:");
        fgets(str,sizeof(str),stdin);
        str[strlen(str)-1]='\0';
        if(strcmp(str,"END")==0)
            break;
        for(i=0;str[i]!='\0';i++)
        {
            str[i] = toUpper(str[i]);
        }
        printf("\nUppercase: %s",str);
        
    }
    printf("END");
    return 0;
}