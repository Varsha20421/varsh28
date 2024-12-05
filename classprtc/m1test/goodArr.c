#include <stdio.h>
void bubSort(int [],int);
void rem(int [],int);
int main()
{
    int N,i;
    scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    bubSort(a,N);
    rem(a,N);
 
    return 0;
}
 
void bubSort(int arr[],int CAP)
{
    int i,j;
    int t;
    for(i=0;i<CAP-1;i++)
    {
        for(j=0;j<CAP-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                 t = arr[j];
                 arr[j] = arr[j+1];
                 arr[j+1] = t;
            }
        }
    }
}
 
void rem(int a[],int CAP)
{
    int flag =0;
    int i,j;
    for(i=0;i<CAP;i++)
    {
        for(j=i+1;j<CAP;j++)
   {
            if(a[j]%a[i]!=0)
            {
                flag = 1;
                break;
            }
        }
    }
    if(flag==0)
        printf("Good");
    else
        printf("Bad");
}

