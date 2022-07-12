#include<stdio.h>
int main()
{
    int i,arr[100],n,a=0,b=1;
    scanf("%d",&n);
    arr[0]=a;
    arr[1]=b;
    for(i=2;i<n;i++)
    {
        arr[i]=arr[i-2]+arr[i-1];
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}