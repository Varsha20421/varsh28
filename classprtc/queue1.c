#include <stdio.h>

#define MAX 5

int rear = 0;
int front =0;

int qa[MAX];

void dispQueue();
void enqueue(int);
void dequeue();

int main()
{
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	enqueue(50);
	dispQueue();

	dequeue();
	dequeue();
	dequeue();
	dequeue();
	dequeue();
	dequeue();
	dispQueue();
	printf("\n");

	return 0;
}
void dispQueue()
{
	int i;
	if(rear == front)
	{
		printf("\nEmpty Queue\n");
		return;
	}
	printf("\nQueue is\n");
	for(i=front;i<rear;i++)
	{
		printf("%d ",qa[i]) ;
	}
	printf("\n\n");
}

void enqueue(int val)
{
	if(rear == MAX)
	{
		printf("\nQueue is full\n");
	}
	qa[rear]=val;
	rear++;
}

void dequeue()
{
	if(front==rear)
	{
		front = 0;
		rear =0;
		printf("\nEmpty Queue\n");
		return;
	}
	printf("%d is dequeued",qa[front]);
	front++;
}
