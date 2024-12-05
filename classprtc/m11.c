#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int isdate(char *,char *);
int main()
{
    int N;
    scanf("%d",&N);
    char date1[100],date2[100];
    while(N>0)
    {
        scanf("%s%s",date1,date2);
        isdate(date1,date2);
        N--;
    }
}

int isdate(char *arr,char *arr1)
{
    char *ptr1 = NULL;
    ptr1 = strtok(arr,"/");
    int a = atoi(ptr1);
    ptr1 = strtok(NULL,"/");
    int a1 = atoi(ptr1);
    ptr1 = strtok(NULL,"/");
    int a2 = atoi(ptr1);

    ptr1 = strtok(arr1,"/");
    int b = atoi(ptr1);
    ptr1 = strtok(NULL,"/");
    int b1 = atoi(ptr1);
    ptr1 = strtok(NULL,"/");
    int b2 = atoi(ptr1);
    if(a2<b2)
    {
        printf("E\n");
    }
    else if(a2>b2)
    {
        printf("L\n");
    }
    else
    {
        if(a1<b1)
        {
            printf("E\n");
        }
        else if(a1>b1)
        {
            printf("L\n");
        }
        else
        {
            if(a<b)
            {
                printf("E\n");
            }
            else if(a>b)
            {
                printf("L\n");
            }
            else
            {
                printf("S\n");
            }
        }
    }
    return 0;
}
