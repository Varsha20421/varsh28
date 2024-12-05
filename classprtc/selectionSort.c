#include <stdio.h>
int selSort(int [],int);
int main()
{
    int arr[] = {9,1,2,5,7,3,4,10};
    int i;
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("\nbefore swapping\n");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\nAfter sorting\n");
    selSort(arr,n);
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    return 0;
}
int selSort(int arr[],int n)
{
     int i,j,t,min;
     for(i=0;i<n-1;i++)
     {
          min = i;
          for(j=i+1;j<n-1;j++)
          {
             if(arr[min]>arr[j])
                  min = j;
          }
            t = arr[i];
            arr[i] = arr[min];
            arr[min] = t;
          
      }
      
}

