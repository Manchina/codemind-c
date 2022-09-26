#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],count=0,i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-2;i++)
    {
       if(arr[i]%2==0 && arr[i+2]%2 || arr[i]%2 && arr[i+2]%2==0)
       {
           count++;
       }

    }
    printf("%d",count);
    return 0;

    }


