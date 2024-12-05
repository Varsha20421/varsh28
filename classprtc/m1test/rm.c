#include <stdio.h>

void rm(int a[],int );
void bubSort(int [],int );

int main()
{
	int N,i;

	scanf("%d",&N);
	int a[N];
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
	

//	qsort(a,N);
	bubSort(a,N);
	rm(a,N);
	return 0;
}

void rm(int a[],int N)
{
	int i,j,k;
	for(i=0;i<N;i++)
	{
		/*for(j=i+1;j<N;j++)
		{
			if(a[i]==a[j])
			{
				for(k=j;k<N-1;k++)
					a[k] = a[k+1];
				N--;
				j--;
			}
		}*/

		if(i==0||a[i]!=a[i-1])
			printf("%d ",a[i]);
	}
/*
	for(i=0;i<j;i++)
		printf("%d ",a[i]);
*/
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
