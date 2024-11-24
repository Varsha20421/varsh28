/*3. Write below functions to extract and return the required inputs from an email id string of max length 80 characters. Program should be able to detect an invalid email id too based on following validations. Also value returned should be in scope and accessible in caller.
a. valid email id will have username, host and domain name (as .com/.edu)
Functions:
char *getuser(char input[]); // return NULL or valid username from email id input
char *gethost(char input[]); //return NULL or valid hostname from email id input
char *getdomain(char input[]); //return NULL or valid domain name from email id input
int isValidDomain(char input[]); // return 1 if domain is “.com” or “.edu” else 0*/

#include <stdio.h>
#include <string.h>

char *getuser(char [],char *);
char *gethost(char [],char *);
char *getdomain(char [],char *);
int main()
{
    char email[81];
    char *ptr = NULL;
    
    printf("Enter email: ");
    scanf("%s",email);
    ptr = strtok(email,"@");
    char *a = getuser(email,ptr);
    ptr = strtok(email,".");
    char *b = getuser(email,ptr);
    ptr = strtok(email,"\n");
    char *c = gethost(email,ptr);
    
    if(a!=NULL &&b!=NULL&&c!=NULL)
        printf("valid");
    else
        printf("invalid");
    return 0;
}
char *getuser(char input[],char *ptr)
{
    static char username[50];
    if(ptr==NULL)
        return NULL;
    int i=0;
    while(ptr!=NULL)
    {
        username[i] = input[i];
        i++;
        ptr++;
    }
    return username;
}

char *gethost(char input[],char *ptr)
{
    static char host[50];
    
    if(ptr==NULL)
        return NULL;
    int i=0;
    while(ptr!=NULL)
    {
        host[i] = input[i];
        i++;
        ptr++;
    }
    return host;
}
char *getdomain(char input[],char *ptr)
{
    static char domain[50];
    if(ptr==NULL)
        return NULL;
    int i=0;
    while(ptr!=NULL)
    {
        domain[i] = input[i];
        i++;
        ptr++;
    }
    return domain;
}
