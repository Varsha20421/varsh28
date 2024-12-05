#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define BUFF 1024
char *makeString(char *,char *,char *);
int main()
{
	
	// To read a string dynamically
	char *result = (char *)malloc(10*sizeof(char));
	char *str1= (char *)malloc(BUFF*sizeof(char));
	//scanf("%s",str1);
	fgets(str1,BUFF,stdin);
	str1[strlen(str1)-1]='\0';
	char *str2= (char *)malloc(BUFF*sizeof(char));
	scanf("%s",str2);
	
	char *str3= (char *)malloc(BUFF*sizeof(char));
	scanf("%s",str3);
	result = makeString(str1,str2,str3);
	printf("%s",result);
	free(result);
	free(str1);
	free(str2);
	free(str3);
	return 0;
}

char *makeString(char *A, char *B, char *C)
{
	int fqS[26],fqC[26];
	int i,j,flag=0;
	char *res = (char *)malloc(10*sizeof(char));
	char *S = (char *)malloc(BUFF*sizeof(char));
//	printf("\n Hello");
	strcpy(S,A);
	strcat(S,B);
	printf("\n%s",S);
	if(strlen(S)==strlen(C))
	{
		for(i=0;i<26;i++)
		{
			fqS[i]=0;
			fqC[i]=0;
		}
	//Frequency Counter
		for(i=0;i<strlen(S);i++)
		{
			fqS[S[i]-'A']++;
		}
		for(i=0;i<strlen(C);i++)
		{
			fqC[C[i]-'A']++;
		}
		for(i=0;i<26;i++)
		{
			if(fqS[i]!=fqC[i])
			{
				flag = 1;
				break;
			}
		}

	}
	else
	{
		flag = 1;
	}

	if(flag ==0)
	{
		strcpy(res,"yes");
	}
	else
	{
		strcpy(res,"no");
	}
	free(S);
	return res;
}
