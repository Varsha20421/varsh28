// print 2 table without using printf

#include <stdio.h>
int main() 
{
    
    int num,itr,res;
    num =2, itr =1;
    char temp[10];
    char temp1[] = {'2'};
    
    printf("%d\n %s\n",sizeof(temp1),temp1); // if temp1 value given in '' quotes -- it acts as array. if it is " " quotes -- it acts as string.
    
    do
    {
        res = num*itr;
        sprintf(temp,"%d x %d = %d",num,itr,res);
      //  printf("%d * %d = %d \n",num,itr,res);
        puts(temp)
        itr++;
    }while(itr<=10);
    return 0;
}



