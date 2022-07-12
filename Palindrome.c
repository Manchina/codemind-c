#include<stdio.h>
int main()
{
    int m,n,sum=0,temp;
    scanf("%d",&n);
    m=n;
    while(n>0)
    {
        temp=n%10;
        sum=sum*10+temp;
        n=n/10;
    }
    if(m==sum)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}