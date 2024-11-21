/*1. Implement sort() to sort a given array. Refer the code snippet below.
*/
#include <stdio.h>
int sort(char [],int);
int main()
{
    char arr[]= “xaybz”;
    int i,n;
    n = sizeof(arr)/sizeof(arr[0])-1;
    printf("Given Array: %s",arr);
    sort(arr,n);
    printf("\nSorted Array: %s",arr);
    return 0;
}
int sort(char arr[],int n)
{
    int i,j;
    char t;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
    return 0;
}
/*output 
Given Array: xaybz
Sorted Array: abxyz
*/