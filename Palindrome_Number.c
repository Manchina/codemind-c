#include<stdio.h>
int main()
{
    int T,i,n,arr[20],rem,temp,sum=0;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<T;i++)
    {
        sum=0;
        n=arr[i];
        temp=n;
        while(n>0)
        {
            rem=n%10;
            sum=sum*10+rem;
            n=n/10;
        }
        if(sum==temp)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
    return 0;
}