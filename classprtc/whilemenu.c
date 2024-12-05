#include <stdio.h>

int displayMenu();

int main()
{	
	int ch,a,b;
	int flag=0;
	while(1)
	{	
		flag=0;
		ch = disaplayMenu();
		
		printf("\nEnter first number: ");
		scanf("%d",&a);

		printf("\nEnter Second number: ");
		scanf("%d",&b);
		switch(ch)
		{
			case 1:
				printf("Addition executed");
				break;
			case 2:
				printf("Subtraction executed");
				break;
			case 3:
				printf("Multiplication executed");
				break;
			case 4:
				printf("Division executed");
				break;
			case 5:
				printf("exited from the menu");
				flag = 1
				break;
			default: 
				printf("Enter correct choice");
				break;
		}
		if(flag==1)
			break;
	}
	printf("Program ended");
	return 0;
}

int displayMenu()
{
	int choice:

	printf("\nPress,"):
	printf("\n1.Addition");	
	printf("\n2.Sub");
	printf("\n3.Multiply");
	printf("\n4.Division");
	printf("\n5.Exit");

	printf("\nChoice:");
	scanf("%d",&choice);

	return choice;
}
