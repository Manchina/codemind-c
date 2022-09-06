#include<stdio.h>
int main()
{
    int odd,even,sumo=0,sume=0,i,arr[100],diff,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            sume=sume+arr[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(i%2!=0)
        {
            sumo=sumo+arr[i];
        }
    }
    diff=sume-sumo;
    printf("%d",diff);
    return 0;
}