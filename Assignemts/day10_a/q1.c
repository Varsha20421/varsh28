/*
A1. Check whether a given number can be expressed as the sum of two prime number

i/p
Enter a positive integer: 34
Output
34 = 3 + 31

34 = 5 + 29
34 = 11 + 23
34 = 17 + 17
NoofWays = 4

NoofWays=-1
*/

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int);
void prime(int);
void produce();

int main() 
{
    produce();
    return 0;
}

bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    if (n == 2)
    {
        return true;
    }
    if (n % 2 == 0) 
    {
        return false; 
    }
    for (int i = 3; i <= sqrt(n); i += 2) {  
        if (n % i == 0) {
            return false; 
        }
    }
    return true;
}


void prime(int n)
{
    int count = 0;
    for (int i = 2; i <= n / 2; i++) 
    {
        if (isPrime(i) && isPrime(n - i)) 
        {
            printf("%d = %d + %d\n", n, i, n - i);
            count++;
        }
    }
    if (count > 0)
    {
        printf("NoofWays = %d\n", count);
    } 
    else 
    {
        printf("NoofWays = -1\n");
    }
}

void produce()
{
    int num;
    printf("Enter a positive integer: ");
    while (scanf("%d", &num) != 1 || num <= 0) 
    {
        printf("Please enter a valid positive integer: ");
        while (getchar() != '\n'); 
    }
    prime(num);
}