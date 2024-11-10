/*
while(cond1)
{
	sts
}
*/

#include <stdio.h>
#include <stdlib.h>

#define SUCCESS 0
#define FAILURE -1
#define True 1
#define False 0


int displayMenu();

int main()
{
	int ch,a,b;
	int flag = 0;
	while(True){
		flag = 0;
		ch = displayMenu();
		if(ch==5)
			break;
		printf("Enter first number: ");
		scanf("%d%d",&a,&b);
		switch(ch)
		{
			case 1:
				printf("%d",a+b);
				printf("\nAddition function executed\n");
				break;
			case 2:
				printf("%d",a-b);
				printf("\nSub function executed\n");
				break;
			case 3:
				printf("%d",a*b);
				printf("\nMul function executed\n");
				break;
			case 4:
				printf("%d",a/b);
				printf("\nDivision function executed\n");
				break;
			case 5:
				printf(
				printf("\nExiting from the Application\n");
				//exit(SUCCESS);
				flag = 1;
				break;
			default:
				printf("\nEnter the correct Choice\n");

		}//end of switch

		if(flag == 1)
			break;

	}//end of while loop

	printf("\nProgram Ended\n\n");
	return (SUCCESS);
}

int displayMenu()
{
	int choice;

	printf("\nPress,");
	printf("\n1. Addition");
	printf("\n2. Sub");
	printf("\n3. Mul");
	printf("\n4. Division");
	printf("\n5. Exit");
	printf("\nChoice: ");
	scanf("%d",&choice);

	return choice;
}
