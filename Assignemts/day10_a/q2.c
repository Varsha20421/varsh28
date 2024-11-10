/*A2.Program to find nth number made of given four digits 1, 4,6 and 9 as the only digits..

Input Format:

The First Line Of Input Contains T no of test cases
The Second Line Of Input Contains N as input taken.

Output Format:
Print the number of digits in the nth number .

Constraints:

1<=T<=100
1<=N<=100

Examples:

Input : 6
Output : 14

1,4 6, 9.11,14

Input : 21
Output : 111
*/

#include <stdio.h>

int findPrime(int);
int countPrime(int);

int main()
{
    int T, N;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&N);  
        countNum(N);
    }
    return 0;
}

// to know whether the number containing all digits 1,4,6,9
int findNum(int n)
{
    int d;
    while(n >0)
    {
        d = n%10;
        if(d!=1 && d!=4 && d!=6 &&d!=9)
            return 0;
        n = n/10;
    }
    return 1;
}
// to count the numbers whose all digits are 1,4,6,9.
int countNum(int num)
{
    int count = 0;
    int a = 1;
    while(count<num)
    {
        if(findNum(a))
        {
            count++;
            if(count==num)
            {
                printf("%d",a);
            }
        }
        a++;
    }
}