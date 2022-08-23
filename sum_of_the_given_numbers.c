#include<stdio.h>
int main()
{
    int n,a,b,sum,i=0;
    scanf("%d",&n);
    do
    {

        scanf("
%d %d",&a,&b);
        printf("%d
",a+b);
        i++;
    }
    while(n>i);
    return 0;

}
