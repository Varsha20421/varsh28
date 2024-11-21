/*
5. Write a program to accept “N” integers from the user. “N” also has to be taken from the user. Take the count of +ve numbers, -ve numbers and 0’s.

However the program should not accept a non-integer value. If a non-integer value is entered, used must be asked to re-enter.
*/

#include <stdio.h>

int main() {
    int N,input,pos,neg,zer;
    pos=0,neg=0,zer=0;
    printf("\nNumber of integers:");
    scanf("%d",&N);
    while(N!=0)
    {
        if(scanf("%d",&input)==1)
        {
            if(input>0)
                pos++;
            else if(input<0)
                neg++;
            else
                zer++;
        }
        else
        {
            printf("Enter intger value\n");
            while (getchar() != '\n');
            scanf(" ");
        }   
        N--;
    }
    printf("Number of +ve numbers: %d\nNumber of -ve numbers: %d\nNumber of zeros: %d",pos,neg,zer);
    
    return 0;
}