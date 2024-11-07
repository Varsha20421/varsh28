/*Print the Nth number of sequence and it should be only prime.

Constraints:
1<=T<=100
1<=N<=10000

Examples :
Input  :
1
10
Output :
 33*/
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
        countPrime(N);
    }
    return 0;
}

// to know whether the number containing all digits prime
int findPrime(int n)
{
    int d;
    while(n >0)
    {
        d = n%10;
        if(d!=2 && d!=3 && d!=5 &&d!=7)
            return 0;
        n = n/10;
    }
    return 1;
}
// to count the numbers whose all digits are prime.
int countPrime(int num)
{
    int count = 0;
    int a = 1;
    while(count<num)
    {
        if(findPrime(a))
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