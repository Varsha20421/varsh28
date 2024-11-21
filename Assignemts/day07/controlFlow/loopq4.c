/*4. WAP to read a number n and to display the cumulative sum of factorial of all numbers upto n . (use for or while)
Input: 4
Ouput: 4!+3!+2!+1! = 33
*/
#include <stdio.h>
int main()
{
    int n,sum,i,j;
    long fact;
    scanf("%d",&n);
    sum = 0;
    for(j=n;j>0;j--)
    {   
        fact = 1;
        for(i=j;i>0;i--)
        {
            fact = fact *i;
        }
        sum+=fact;
    }
    printf("sum of factorial of all numbers upto %d is %d",n,sum);
    return 0;
}