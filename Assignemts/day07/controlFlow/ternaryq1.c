/*1. Using ternary operator compare 3 numbers and display the smallest number
*/

#include <stdio.h>

int main() {
    int num1,num2,num3;
    int small;
    num1 = 9;
    num2 = 12;
    num3 = 10;
     
    small = (num1<num2)?((num1<num3)?num1:num3):((num2<num3)?num2:num3);
    printf("Smallest number is %d",small);

    return 0;
}