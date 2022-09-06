#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,sumo=0,sume=0,diff;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            sumo=sumo+arr[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            sume=sume+arr[i];
        }
    }
    diff=sume-sumo;
    printf("%d",abs(diff));
    return 0;
}