#include<stdio.h>
int num(int n)
{
    static int i=1;
    printf("%d ",i);
    if(i==n)
    {
        return 0;
    }
    i++;
    return num(n);
}
int main()
{
    int n;
    scanf("%d",&n);
    if(n>=1 && n<=10000)
    num(n);
    else
    printf("The Number Series is Not Possible Print");
}