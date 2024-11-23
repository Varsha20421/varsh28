/*1. WAP to read the following information at run time and to display. Choose appropriate data type and format specifier.
1. username [maximum of length 125]
2. age
3. Salary [float]
4. Designation code [as short type with values {1, 2, 3, 4, 5, 6}
5. Gender [a single char field]*/
#include <stdio.h>
int main()
{
    char username[126];
    int age;
    float salary;
    short Designation_code;
    char Gender;
    
    scanf("%s",username);
    scanf("%d",&age);
    scanf("%f",&salary);
    scanf("%hd",&Designation_code);
    scanf(" ");
    scanf("%c",&Gender);
  
    printf("Username: %s\nAge: %d\nSalary: %f\nDesignation_code: %d\nGender: %c",username,age,salary,Designation_code,Gender);
    return 0;
}
