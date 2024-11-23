/*2. WAP to read a user choice as ‘y’ or ‘Y’ or ‘n’ or ‘N’ and display read choice as “Yes” or “No” according to the input received.
‘y’ or ‘Y’à display “Yes”
‘n’ or ‘N’à display “No”
for any other character received à display “invalid character” and exit
*/

#include <stdio.h>
int main()
{
    char choice;
    printf("Enter your choice: ");
    scanf("%c",&choice);
    if(choice == 'Y' || choice == 'y')
        printf("Yes");
    else if(choice == 'N' || choice == 'n')
        printf("No");
    else
        printf("invalid character");
    return 0;
}
