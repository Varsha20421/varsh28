#include <stdio.h>

int insSort(int [],int);
int main()
{
	int arr[] = {9,8,7,3,4,5,6};
	int i;
	int n=sizeof(arr)/sizeof(arr[0]);
	insSort(arr,n);
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
}

int insSort(int arr[],int n)
{
	int i,key,j;
	for(i=1;i<n;i++)
	{
		key = arr[i];
		for(j=i-1;(j>=0) && (key<arr[j]);j--)
		{
			arr[j+1] = arr[j];
		}
		arr[j+1]=key;
	}
}
