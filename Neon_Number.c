#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum=0,temp,s;
    scanf("%d",&n);
    s=n*n;
    while(s)
    {
        temp=s%10;
        sum=sum+temp;
        s=s/10;
    }
    if(sum==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
    return 0;
}