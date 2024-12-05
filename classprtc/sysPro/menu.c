#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void displaymenu();
int main()
(
	int ch;
	displaymenu();
	scanf("%d",&ch);
	scanf(" ");
	int a,b;
	switch(ch)
	{
		case 1: 
			printf("\nEnter length of Rectangle: ");
			scanf("%d",&a);
			
			printf("\nEnter breadth of Rectangle: ");
			scanf("%d",&b);

			printf("\nArea of rectangle %d",a*b);
			break;
		case 2:
			printf("\nEnter radius of circle: ");
			scanf("%d",&a);

			printf("\nArea of Rectangle: %d",3.14*a*a);
			break;
		case 3:
		case 0:
			printf("\nProgram ended\n");
			return 0;
			break;
		default: 
			displaymenu();
			break;

	}
	return 0;
)

void displaymenu()
{
	printf("----------------");
	printf("\nEnter 1 to find area of rectanngle\n");
	printf("\nEnter 2 to find area of circle\n");
	printf("\nEnter 3 to for calc\n");
	printf("\nEnter 0 to exit");
}
