#include <stdio.h>
//#define CAP 7

int bubbleSort(int [],int);
int main()
{
	int arr[] = {10,30,20,15,60,90,1};
	int n = sizeof(arr)/sizeof(arr[0]);

	int i;
	//int c[CAP];
	bubbleSort(arr,n);
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");
	return 0;
}

int bubbleSort(int arr[],int n)
{
	int i,j,t;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				t = arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=t;
			}
		}
	}
	return 0;
}
