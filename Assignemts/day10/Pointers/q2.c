/*Refer the code snippet below. int main()
Perform the following.

a. Implement the append() function to append the contents of the appendstr[] to arr using pointer.

[Note: append() should only use its content and not manipulate it. Contents should be retained even after the call]*/

#include <stdio.h>

#define MAX 100
#define SUCCESS 0
#define FAILURE 1

void display(char *);
int append(char *,char *);
int main()
{

    char arr[MAX] = "Learning C";
    char*ptr = arr;
    char appendstr[MAX]= "in my org";
    printf("\nAddress of ptr:%x", ptr);
    int ret = append(ptr, appendstr);// append the string
    printf("\nAddress of ptr:%x", ptr);
    if (ret == SUCCESS)
        display(ptr); // display the address in hex and contents using pointer
}

void display(char *ptr)
{
    printf("\nAddress is :0x%x",ptr);
    printf("\nContents of pointer: %s\n",ptr);
}

int append(char *ptr,char *app)
{
    while(*ptr!='\0')
        ptr++;
    while(*app!= '\0')
    {
        *ptr = *app;
        ptr++;
        app++;
    }        
    *ptr = '\0';
    return SUCCESS;
}

