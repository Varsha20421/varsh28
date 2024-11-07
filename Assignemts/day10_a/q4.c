/*A4. rotate array every kth element

1 2 3 4 5 6 7 8 9

k= 3

3 2 1 6 5 4 9 8 7
*/

#include <stdio.h>

void reverse(int [], int , int ) ;
void rotateArray(int [], int , int );
void printArray(int [], int ); 

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int k;
    
    int n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, n);
    printf("k= ");
    scanf("%d",&k);
    
    rotateArray(arr, n, k);
    printf(" ", k);
    printArray(arr, n);
 
    return 0;
}

void reverse(int arr[], int start, int end) 
{
    while (start < end) 
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotateArray(int arr[], int n, int k) 
{
    for (int i = 0; i < n; i += k) 
    {
        if (i + k - 1 < n) {
            reverse(arr, i, i + k - 1);
        } else {
            reverse(arr, i, n - 1);
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}