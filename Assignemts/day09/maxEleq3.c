/*Refer the program “array_pointer.c”. Add a function getmax() to find the maximum in the array and call in main() and display the result.*/
#include <stdio.h>
#define MAX 5

int getmax(int []);
int main()
{
 int index_1; 
 int index = 0; 
 int min,m;
 int numbers[MAX] = {44,22,11,55,33};

 min = 99;  

 for(index_1 = 0; index_1 < MAX; index_1 += 1)
 {
   printf("%d\t", numbers[index_1]);
 }
 printf("\n");

 for(index_1 = 0; index_1 < MAX; index_1 += 1) 
 {
  if(numbers[index_1] < min)
  {
   min = numbers[index_1];
   index = index_1; 
  }
 }
  numbers[index] = 0;
  
 for(index_1 = 0; index_1 < MAX; index_1 += 1)
 {
   printf("%d\t", numbers[index_1]);
 }
 
 m = getmax(numbers);
 printf("\nMax element is %d",m);
 printf("\n");
 return 0;
}

int getmax(int arr[])
{
    int max,i;
    max =0;
    for(i=0;i<MAX;i++)
    {
        if(arr[i]>max)
            max = arr[i];
    }
    return max;
}

/*
44	22	11	55	33	
44	22	0	55	33	
Max element is 55
*/