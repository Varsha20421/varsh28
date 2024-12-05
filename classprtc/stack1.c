#include <stdio.h>
#include <stdlib.h>

#define MAX 5
//Dynamic allocation Memory

int bottom = -1;
int top = -1;

int push(int *,int);
int pop(int *);
void dispStack(int *);

//int stackCount[MAX];

int main()
{
	int v,i;
	int *arr = NULL;
	arr = (int *)malloc(MAX*sizeof(int));
	v = pop(arr);
	printf("%d element is deleted from stack",v);
	printf("\n\n");

	push(arr,10);
	push(arr,12);
	push(arr,14);
	push(arr,16);
	push(arr,18);
	push(arr,20);
	dispStack(arr);

	for(i=0;i<MAX;i++)
	{
		v = pop(arr);
		printf("%d element is deleted from stack",v);
		dispStack(arr);
	//	printf("\n\n");
	}
	free(arr);
	printf("\n");
}

int push(int *arr, int v)
{
	if(top==MAX-1)
	{
		printf("\nStack container is full\n");
		return 0;
	}
	top++;
	arr[top] = v;
}

int pop(int *arr)
{
	int v;
	if(top == bottom)
	{
		printf("\nStack is empty\n");
		return 0;
	}

	v = arr[top];
	top--;
	return v;
}

void dispStack(int *arr)
{
	int iter;
	if(top==bottom)
	{
		printf("\nstack/container is empty");
		return;
	}
	for(iter = top;iter>bottom;iter--)
	{
		printf("\n%d",arr[iter]);
	}
	printf("\n\n");
}
