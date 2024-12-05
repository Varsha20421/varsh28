#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void tk(char *,char *);
void tk1(char *,int);
int main()
{
    char *l1 = (char *)malloc(100*sizeof(char));
    char *l2 = (char *)malloc(100*sizeof(char));
    
    scanf("%s",l1);
    scanf("%s",l2);
    tk(l1,l2);
    free(l1);
    free(l2);
}

void tk(char *l1,char *l2)
{
    char *ptr = strtok(l1,",");
    while(ptr!=NULL)
    {
        tk1(l2,atoi(ptr));
        ptr = strtok(NULL,",");
    }
}

void tk1(char *l2,int num)
{
    int c =0;
    char *ptr1 = strtok(l2,",");
    while(ptr1!=NULL)
    {
        if(atoi(ptr1) == num)
            c++;
        ptr1 = strtok(NULL,",");
    }
    printf("%d-%d",num,c);
}
