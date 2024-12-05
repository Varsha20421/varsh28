#include <stdio.h>

enum RegClrCodes
{
	Black,
	Brown,
	Red,
	Orange,
	Yellow,
	Green,
	Blue,
	Voilate,
	Gray,
	white
}RCC;

int dispMenu()
{
	int cc;

	printf("\nPress,");
	printf("\n0. Black");
	printf("\n1. Brown");
	printf("\n2. Red");
	printf("\n3. Orange");
	printf("\n4. Yellow");
	printf("\n5. Green");
	printf("\n6. Blue");
	printf("\n7. Voilate");
	printf("\n8. Gray");
	printf("\n9. White");

	scanf("%d",&cc);
	return cc;
}

int main()
{
	RCC = dispMenu();
	switch(RCC)
	{
		case Black:
			printf("\nBalck");
			break;
		case Brown:
			printf("\nBrown");
			break;
		case Red:
			printf("\nRed");
			break;
		case Orange:
			printf("\nOrange");
			break;
		case Yellow:
			printf("\nYellow");
			break;
		case Green:
			printf("\nGreen");
			break;
		default:
			printf("\nEnter correct choice");
			break;
	}
	printf("\nProgram Ended\n");
	return 0;
}
