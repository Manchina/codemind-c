#include<stdio.h>
int main()
{
    int n,min;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    min=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
            
        }
    }
    printf("%d",min);
    return 0;
}