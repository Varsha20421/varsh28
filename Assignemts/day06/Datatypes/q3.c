/*3. WAP to read a number in decimal (0-127) and display it in 2 digit hex characer.
*/
#include <stdio.h>
int main()
{
    int decimal;
    printf("Enter a decimal number: ");
    scanf("%d",&decimal);
    
    if(decimal<0 || decimal>127)
    {
        printf("Inalid input.Please enter a number between 0 to 127.");
        return 1;
    }
    else
        printf("%02X\n",decimal);
}
