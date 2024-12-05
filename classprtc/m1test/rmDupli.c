#include <stdio.h>
void removeDupli(int [],int);

int main()
{
    
    int N,i;
    scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    removeDupli(a,N);
    return 0;
}

void removeDupli(int a[],int N)
{
    int i,j,k;
	for(i=0;i<N;i++)
	{
		for(j=i+1;j<N;j++)
		{
			if(a[i]==a[j])
			{
				for(k=j;k<N-1;k++)
				{
					a[k]=a[k+1];
				}
			
			N--;
			j--;
			}
		}
	}
    for(i=0;i<j;i++)
    {
        printf("%d\n",a[i]);
    }
}


