#include <stdio.h>

int main()
{
	int i;
	int res =1;
	for(i=1;i<=6;i++)
	{
		if(i==1)
			res = 1;
		else if(i%2==0)
		{
			res = res + i*i;
		}
		else
		{
			res = res - i*i;
		}
	}
	printf("%d\n",res);
	return 0;
}
