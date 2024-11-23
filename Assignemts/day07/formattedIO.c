/*Q1. WAP with
1a. function readdisplay() to read the following data types only one at a time at run time and to display.
1. char type
2. integer type
3. char array of maximum 80 characters
4. short type
5. float type
TestData:
‘c’, 8978, “hello”, 8, 45.678
‘H’, 254, “hello Hi How”, 256, 145.2678
*/

#include <stdio.h>

void readdisplay();
void readdisplay2(char, int, char [],short,float);
void displaySize(char, int, char [],short,float);
void toUpperCase(char []);
int main()
{
    readdisplay();

    return 0;
}

void readdisplay()
{
    char a;
    int b;
    char arr[80];
    short c;
    float f;

/*1b. Create a copy of readdisplay() as function readdisplay2() with changes below

· Instead of reading 1 data at a time, read all inputs using a single scanf().

Test readdisplay2() by changing the read order. Do you observe any issue?

A. Instead of reading 1 data at atime, read all inputs using a single scanf().Then the space or enter key is taken in buffer and the character is not read.*/

    printf("Enter Character: ");
    scanf("%c",&a);
 printf("Enter Integer: ");
    scanf("%d",&b);
    printf("Enter Array: ");
    scanf("%s",arr);
    printf("Enter Short Integer");
    scanf("%hd",&c);
    printf("Enter float: ");
    scanf("%f",&f);

    printf("Character: %c\nInteger: %d\nArray: %s\nShort Integer%hd\nFloat: %f",a,b,arr,c,f);
    readdisplay2(a,b,arr,c,f);

}

void readdisplay2(char a, int b, char arr[],short c,float f)
{
//1c. display the char array content in upper case.
    toUpperCase(arr);

    printf("Character: %c\nInteger: %d\nArray: %s\nShort Integer%hd\nFloat: %f",a,b,arr,c,f);
//1d. Add code to display the size of each data type mentioned in Q1a and sizeof the variables of each datatype.
    displaySize(a,b,arr,c,f);
}

void toUpperCase(char arr[])
{
    int i;
    for(i=0;i<sizeof(arr);i++)
    {
        if(arr[i]>='a' && arr[i]<='z')
            arr[i] = arr[i] - 32;
    }
}

void displaySize(char a,int b,char arr[],short c,float f)
{
    printf("\nSize of char datatype: %d",sizeof(char));
    printf("\nSize of char: %d",sizeof(a));

    printf("\nSize of int datatype: %d",sizeof(int));
    printf("\nSize of int: %d",sizeof(b));

    printf("\nSize of array datatype: %d",sizeof(char*));
 printf("\nSize of array: %d",sizeof(arr));

    printf("\nSize of short datatype: %d",sizeof(short));
    printf("\nSize of short: %d",sizeof(c));

    printf("\nSize of float datatype: %d",sizeof(float));
    printf("\nSize of float: %d",sizeof(f));
}
