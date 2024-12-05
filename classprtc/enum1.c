#include <stdio.h>

enum daysOfWeek
{
	Monday,
	Tuesday=1000,
	Wednesday,
	Thursday=4000,
	Friday,
	Saturday,
	Sunday
}Days;

int main()
{
	Days = Friday;

	printf("\nDay = %d",Days);
	printf("\n\n");
	return 0;
}


