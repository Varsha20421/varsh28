/*2. WAP to read a designation code and display his designation as a string. Use the following mapping.
2 – Software Developer
3 – Senior Software Developer
4 – Team Lead
5 – Senior Team Lead
anyother value – incorrect designation code
*/

#include <stdio.h>
int main()
{
    int desigCode;
    printf("Enter Designation Code:");
    scanf("%d",&desigCode);
    switch(desigCode)
    {
        case 2:
            printf("Software Developer");
            break;
        case 3:
            printf("Senior Software Developer");
            break;
        case 4:
            printf("Team Lead");
            break;
        case 5:
            printf("Senior Team Lead");
            break;
        default:
            printf("incorrect designation code");
            break;
    }
    return 0;
}