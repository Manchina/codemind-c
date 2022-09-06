#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],s=0,i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            s=s+arr[i];
        }
    }
    printf("%d",s);
    return 0;
}