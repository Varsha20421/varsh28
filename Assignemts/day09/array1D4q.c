/*Extend the code given below to read N and a start value from the user to perform the given operations.
Add the following functions choosing proper input, output and return.
a. init() - Use the inputs to initialize the first N elements of the array with N consequetive values starting with given start value .
b. update() – increment value of every element in the array
c. display() – display the contents of arra*/
#include <stdio.h>
#define MAX 100
void init(int [], int , int );
void update(int [],int );
void display(int [],int );

int main()
{
    int arr[MAX] = {11,22,33};
    int N,s;
    printf("Enter number of elements: ");
    scanf("%d",&N);
    printf("Starting value: ");
    scanf("%d",&s);
    
    init(arr,N,s);
    display(arr,N);
    printf("\n");
    update(arr,N);
    display(arr,N);
    
}
void init(int arr[], int N, int s)
{
    int i,t;
    for(i=0;i<N;i++)
    {
        t = arr[i];
        arr[i] = s+i;
        arr[i+1] = t;
    }
}

void update(int arr[],int N)
{
    int i;
    for(i=0;i<N;i++)
        arr[i]++;
}
void display(int arr[],int N)
{
    int i;
    for(i=0;i<N;i++)
        printf("%d ",arr[i]);
}

/* Output--
Enter number of elements: 7
Starting value: 5
5 6 7 8 9 10 11 
6 7 8 9 10 11 12 
*/
