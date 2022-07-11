#include<stdio.h>
int main()
{
    int product=1,sum=0,n,temp;
    scanf("%d",&n);
    while(n>0)
    {
    temp=n%10;
    sum=sum+temp;
    product=product*temp;
    n=n/10;
    }
    if(sum==product)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
    return 0;
    
}