#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i,j;
    char *input1 = (char *)malloc(100*sizeof(char));
    char *input2 = (char *)malloc(100*sizeof(char));
    
    scanf("%s",input1);
    scanf("%s",input2);
    int l1[100],l2[100];
    int s1=0,s2=0;
    char *token = NULL;
    token = strtok(input1,",");
    while(token !=NULL)
    {
        l1[s1++]=atoi(token);
        token = strtok(NULL,",");
    }
    token = strtok(input2,",");
    while(token !=NULL)
    {
        l2[s2++]=atoi(token);
        token = strtok(NULL,",");
    }
    for(i=0;i<s1;i++)
    {
        int c =0;
        for(j=0;j<s2;j++)
        {
            if(l2[j]==l1[i])
                c++;
        }
        printf("%d-%d\n",l1[i],c);
    }
}
