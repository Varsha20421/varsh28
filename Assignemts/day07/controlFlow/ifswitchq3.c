/*3.WAP to test the eligibility for deployment post training. Need to fulfill all the 4 conditions. Read the score inputs from user at runtime. (Use if else and switch together).
i. Test1 Score >= 75%
ii. Test2 Score >= 75%
iii. Test3 Score >= 70%
iv. Project Score >=75%
*/
#include <stdio.h>
int main()
{
    int ts1,ts2,ts3,ps;
    int choice;
    printf("Enter test scores:\n");
    scanf("%d%d%d%d",&ts1,&ts2,&ts3,&ps);
    if(ts1>=75 && ts2>=75 && ts3>=70 && ps>=75)
        choice = 1;
    else
        choice = 0;
    
    switch(choice)
    {
        case 0:
            printf("Not Eligible");
            break;
        case 1:
            printf("Eligible");
            break;
    }
    return 0;
}