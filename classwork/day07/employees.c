#include <stdio.h>
#include <string.h>
int main()
{
/*int id,salary;
char name[30];
char Address[20];
char Desg[10];
long phone;
char gender;

printf("employee data\n");
scanf("%d\n %s\n %c\n %s\n %li\n %i\n %s",&id,name,&gender,Address,&phone,&salary,Desg);
printf("SINo | ID | Name | Gender | Address | Phno | Salary | Desg\n");
printf("001 | %d | %s | %c | %s | %li | %i | %s\n",id,name,gender,Address,phone,salary,Desg);*/

char str1[20]= "101";
char ch;
char buff[1024] ={'\0',};

puts("\n SlNo | Name | ID| \n");
strcat(buff,"001 | ");
strcat(buff,str1);
strcat(buff,"|");
strcat(buff,"varsha");
puts(buff);
return 0;
}

