/*
Type casting and Conversions Assignment
1. Refer the code snippet below perform the operations marked in TBD section, display the results using appropriate format specifier, display results.
#include <stdbool.h>
int main()
{
int i = 123;
short s = 98;
bool b = true;
char c = 'Y';
float d = 235.789;
//TBD – perform operations below and display result using appropriate format specifier
b+c
s * i
c * d
c = c+b
d = d+c
b = -d
return 0;
}
*/

#include <stdio.h>
#include <stdbool.h>
int main()
{
int i = 123;
short s = 98;
bool b = true;
char c = 'Y';
float d = 235.789;
printf("integer: %d \t short: %hd \t bool: %d \t char: %c \t float: %.3f ", i, s, b, c, d);

//b = b+c;
printf("\n b+c= %d",b+c);
printf("\ns*i= %d",(int )s * i);
printf("\nc*d= %.3f",(int )c * d);
c = c+b;
printf(“\n c = %c”,c);
d = d+c;
printf("\n d = %.3f",d);
b = -d;
b= (bool) -d;
printf("\n b= %d",b);
return 0;
}
/* 
output:
integer: 123 	 short: 98 	 bool: 1 	 char: Y 	 float: 235.789 
 b+c= 90
s*i= 12054
c*d= 20985.221
 c = Z
 d = 325.789
 b= 1
*/