#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,s=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+arr[i];
    }
    printf("%d",s);
    return 0;
}