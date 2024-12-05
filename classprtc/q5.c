#include <stdio.h>
int main()
{
	int i,j;
	int n=1;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(n%5==0)
				printf("%d",n);
			else
				printf("%d*",n);
			n++;
		}
		printf("\n");
	}
	return 0;
}

