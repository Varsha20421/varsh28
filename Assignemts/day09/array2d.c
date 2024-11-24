/*2. Refer the code snippet below.
Allow user to perform the following operations.
a. init() - initialize the array and return 0
b. search_update() – search for a given element in array and if found update it to given value and return 0 else return 1
c. display() – traverse and display array contents
For the functions, pass array and other required arguments to functions and return as per requirement
*/
#include <stdio.h>
#define ROWS 3
#define COLS 3

int init(int [ROWS][COLS]);
int searchUpdate(int [ROWS][COLS],int,int);
void display(int [ROWS][COLS]);
int main()
{
    int arr[ROWS][COLS];
    int c,search,n;
    printf("\nChoose an operation: ");
    printf("\n1. Initialize array");
    printf("\n2. Search and update Element");
    printf("\n3. Display");
    printf("\n4.Exit");
    while(1)
    {
        printf("\nEnter your choice: ");
        scanf("%d",&c);
        switch(c)
        {
            case 1:
                if(init(arr)==0)
                    printf("\nArray initialized successfully\n");
                break;
            case 2:
                printf("\nEnter value to search and update:\n");
                printf("\nEnter value to Search: ");
                scanf("%d",&search);
                printf("\nEnter value to update: ");
                scanf("%d",&n);
                if(searchUpdate(arr,search,n)==1)
                    printf("\nElement not found\n");
                break;
            case 3:
                display(arr);
                break;
            case 4:
                printf("\nExiting\n");
                return 0;
            default:
                printf("\nEnter valid number:\n");
                break;
        }
    }
    return 0;
}
int init(int arr[ROWS][COLS])
{
    int i,j;
    printf("\nEnter values for the array\n");
    for(i=0;i<ROWS;i++)
    {
        for(j=0;j<COLS;j++)
        {
            printf("arr[%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    return 0;
}

int searchUpdate(int arr[ROWS][COLS],int search,int n)
{
    int i,j;
    for(i=0;i<ROWS;i++)
    {
        for(j=0;j<COLS;j++)
        {
            if(arr[i][j]==search)
            {
                printf("Updating....");
                arr[i][j] = n;
				printf("%d",arr[i][j]);
                return 0;
            }
        }
    }
    return 1;
}

void display(int arr[ROWS][COLS])
{
    int i,j;
    for(i=0;i<ROWS;i++)
    {
        for(j=0;j<COLS;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}

