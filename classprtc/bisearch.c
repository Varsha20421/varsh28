#include<stdio.h>
int binarySearch(int [],int,int,int);

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int x,low,high;
	low = 0;
	high =9;
    printf("Enter value: ");
    scanf("%d",&x);
   	if(binarySearch(arr,low,high,x)==-1)
	{
		printf("\nkey not found\n");
	}
	else
		printf("\n%d found\n",x);
    return 0;
}

//Iterative
/*int binarySearch(int arr[],int x)
{
    int low,high,mid;
    low = 0;
    high =9;
    while(1)
    {
        if(low>high)
        {
           // printf("Not found");
           // break;
		   return 1;
        }
        else
        {
			
    		mid = (low+high)/2;
            if(x==arr[mid])
            {
               // printf("%d found at %d\n",x,mid);
               // break;
			   return mid;
            }
            else if(x>arr[mid])
                low = mid +1;
            else 
                high = mid-1;
        }
    }
    return 0;
}*/

//Recursive
int binarySearch(int arr[],int low,int high,int x)
{
	int mid;
	if(low>high)
	{   
 		return -1;
 	}
 	else
 	{
 
		mid = (low+high)/2;
	if(x==arr[mid])
 	{
 		return mid;
 	}
 	else if(x>arr[mid])
 		return binarySearch(arr,mid+1,high,x);
 	else
 		return binarySearch(arr,low,mid-1,x);
 	}
	
}
