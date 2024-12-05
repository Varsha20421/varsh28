/*#include <stdio.h>
#uisng for loop
int main()
{
	int i,j;

	for(i=0,j=2;i<10;i++,j+=2)
		printf("%d %d",i,j);
	return 0;
}
*/

# goto -- it likes jump statement
#include <stdio.h>
int main()
{
	int itr = 1;
loopLabel:
	printf("%d\n",itr);
	itr++;
	if(itr >5)
		goto exitLabel;
	else 
		goto loopLabel;
exitLabel:
	printf("\n");
	return 0;
}
