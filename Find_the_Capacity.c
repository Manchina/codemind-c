#include<stdio.h>
int main()
{
    int t,s,b,capacity,ans;
    scanf("%d %d %d",&t,&s,&b);
    capacity = 2*s*t*b*512;
    ans = capacity / 1024;
    printf("%dKB",ans);
}