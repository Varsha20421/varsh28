/*4. Refer the program “value_out_of_domain.c”. Try to run the program with a large value say 255. Check the output? Is it correct? Fix the issue observed.
What improvements do you suggest?*/

#include<stdio.h>
int main()
{
        int fact=1;
        int count,num;
        printf("Enter a number:");
        scanf("%d",&num);
        for(count = 1;count <= num;count++)
        {
                fact = fact * count;
        }
        printf("factorial of %d is :%d \n",num,fact);
        return 0;
}

/*
Above code is for factorial of a number. if number = 255.factorial of 255 will be large having 505 digits. But in the above code fact is initialized with int datatype, whose range is 4 bytes .So it cant hold this value.
To fix it, we need to define an array with large size like array[1000].
*/
