/*1. Refer the code snippet below. 
Perform the following.
a. Implement the display() function (Use the “0x%x” formatting specifier to print addresses in hexadecimal.)
b. comment on the sizeof(ptr) and s
*/

#include <stdio.h>
void display(char *);
int main()
{
    char arr[]="hello hi";
    char *ptr = arr;
 //   printf(“sizeof ptr:%d, arr:%d”, sizeof(ptr), sizeof(arr));
    display(ptr); // display the address in hex and contents using pointer
    return 0;
}

void display(char *ptr)
{
    printf("0X%x\n",ptr);
}
