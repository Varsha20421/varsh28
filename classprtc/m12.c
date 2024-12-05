#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int isthere(char *);
int main()
{
    int N,i;
    
    char arr[100];
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf(" ");
        fgets(arr,100,stdin);
        arr[strlen(arr)-1] = '\0';
        isthere(arr);
    }
    return 0;
}

int isthere(char *arr)
{
    int i;
    int cis,ca;
    int c = 0;
    int n = strlen(arr);
    cis = 0,ca=0;
    
    for(i=0;i<n;i++)
    {
        if(arr[i]=='a')
        {
            ca = ca+i;
        }
        if(arr[i] == 'i' && arr[i+1] == 's')
        {
            cis= cis+i;
        }
    }
    if(cis==0)
        c--;
    if(ca==0)
        c--;
    
    printf("%d\n",ca+cis+c);
    return 0;
}
