/*8. Refer the code below. It does not output anything. Fix it.
#include <stdio.h>
int main()
{
int x = 5;
while (x > 0);
{
printf( "Value of x :%d \n", x);
x--;
}
return 0;
}
*/
#include <stdio.h>
int main()
{
    int x = 5;
    while (x > 0) // After while there should not be semicolon;
    {
        printf( "Value of x :%d \n", x);
        x--;
    }
    return 0;
}