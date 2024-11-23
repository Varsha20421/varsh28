/*Q2. Try to run the program with code snippet below. Check the output and analyse. Fix it to get correct result.*/
#include<stdio.h>
int main()
{
    unsigned long int ul = 200333333334340;
    //printf("value is:%d\n", ul); this prints value in negative value. So use ld for for long int,
    printf("value is:%ld\n", ul);
    return 0;
}