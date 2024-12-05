#include <stdio.h>

int main()
{
	char taste = 'g';
	int emptyPlate = 10;
	int sFull = 0;

	do
	{
		printf("Have a bite of food\n");
		emptyPlate --;
		printf("Stomach full or not (1/0):\n");
		scanf("%d",&sFull);
		printf("How is the taste (g/b):\n ");
		scanf(" ");
		taste = getchar();
	}while(taste=='g'&& sFull==0 && emptyPlate>=0);
	return 0;
}
