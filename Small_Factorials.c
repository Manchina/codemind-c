#include<stdio.h>
int main()
{
    int t,n,i,fact,j;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        fact=1;
        for(j=1;j<=n;j++)
        {
          fact=fact*j;

        }
        printf("%d
",fact);
    }
    return 0;
}
