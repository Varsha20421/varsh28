#include <stdio.h>
int main()
{
	int itr;
	int  res=1;
	for(itr = 1;res<=64;itr++)
	{
       if(res==64)
	   		printf("%d.",res);
       else
	   		printf("%d, ",res);
        	 res = res*2;
	}
	printf("\n");
	return 0;
}
