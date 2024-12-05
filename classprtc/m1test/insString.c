#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100];
    char s2[10];
    char result[100];
    int pos;
    scanf("%s",s1);
    scanf("%s",s2);
    
    scanf("%d",&pos);
    int i;
    int k=0;
    for(i=0;i<pos;i++,k++)
    {
        result[k] = s1[i];
    }
    for(i=0;i<strlen(s2);i++,k++)
    {
        result[k]=s2[i];
    }
    for(i=pos;i<=strlen(s2);i++,k++)
    {
        result[k] = s1[i];
    }
    result[k]='\0';
    printf("%s",result);
}
