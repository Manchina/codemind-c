#include<stdio.h>
int main()
{
    int pro=1,sum=0,f,n,temp;
    scanf("%d",&n);
    while (n>0)
    {
        temp=n%10;
        sum=sum+temp;
        pro=temp*pro;
        n=n/10;
    }
    f=pro-sum;
    printf("%d",f);
    return 0;
}