#include <stdio.h>
int main()
{
	char clrCode;
	clrCode = getchar();

	if(clrCode == 'B')
		printf("Black");
	else if(clrCode == 'N')
		printf("Brown");
	else if (clrCode == 'R')
		printf("Red");
	else
		printf("Enter correct color value");
	printf("\nprogram ended\n");
	return 0;
}
