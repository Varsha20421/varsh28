#include <stdio.h>
#include <string.h>

int main()
{
    char a[100],s[100];
    scanf("%[^\n]s",a);
   // printf("%s ",a);
    int i,j=0;
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]!='a' && a[i]!='e' && a[i]!='i' && a[i]!='o' && a[i]!='u')
        {
            s[j++]=a[i];
        }
    }
    s[j] = '\0';
    printf("%s",s);
    return 0;
}
