/*
A5.
Write a c program to print alphabet triangle.
Input: 5
Output:

     A
    ABA
   ABCBA
  ABCDCBA
 ABCDEDCBA


     1
    121
   12321
  1234321
 123454321
 */
 
#include <stdio.h>

void printSpaces(int,int);
void printInc(int,char);
void printDec(int,char);
void printAlphabet(int);
void printNum(int); 

int main() 
{
    int n;
    scanf("%d", &n);
    printf("\n");
    printAlphabet(n);
    printf("\n\n");
    printNum(n);
    return 0;
}
//for spaces
void printSpaces(int n,int i) 
{
    int j;
    for (j=0; j<n-i-1; j++) 
        printf(" ");
}
//for increasing letters
void printInc(int i, char startChar)
{
    int j;
    for (j=0; j<=i; j++)
        printf("%c", startChar + j);
}

//for decreasing letters
void printDec(int i, char startChar)
{
    int j;
    for (j=i-1; j>=0; j--) 
        printf("%c", startChar + j);
}

//to print Alphabet traingle
void printAlphabet(int n) 
{
    int i;
    for (i=0; i< n; i++) 
    {
        printSpaces(n, i);                   
        printInc(i, 'A');      
        printDec(i, 'A');      
        printf("\n");
    }
}

//to print numbers traingle
void printNum(int n) 
{
    int i;
    for (i=0; i< n; i++)
    {
        printSpaces(n, i);                    
        printInc(i, '1');      
        printDec(i, '1');     
        printf("\n");
    }
}