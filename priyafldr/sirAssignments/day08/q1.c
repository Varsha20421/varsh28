#include <stdio.h>
/*
Question !: Print series 0,3,8,15,24,35,48,63,80,99
n = 10
*/
int main()
{
	int n, itr;

	printf("Enter n value: ");
	scanf("%d",&n);

	for(itr=1;itr<n;itr++)
	{
		printf("%d, ",(itr*itr)-1);
	}
	printf("%d",(itr*itr)-1);
	return 0;
}

