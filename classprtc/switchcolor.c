#include <stdio.h>
int main()
{
	char clrCode;
	clrCode = getc(stdin);

	switch(clrCode)
	{
		case 'B':
        	printf("Black");
			break;
		case 'N':
            printf("Brown");
 			break;
		case 'R':
            printf("Red");
 			break;
        default:
            printf("Enter correct color value");
 			break;
	}
 	printf("\nprogram ended\n");
    return 0;
}

