#include<stdio.h>
int main()
{
    int n,temp,larg=0;
    scanf("%d",&n);
    while(n>0)
    {
        temp=n%10;
        if(larg<temp)
        {
            larg=temp;
        }
        n=n/10;
    }
    printf("%d",larg);
    return 0;
}