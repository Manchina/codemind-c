#include<stdio.h>
#include<math.h>
int main()
{
    int i,n;
    float v;
    scanf("%d",&n);
    v=sqrt(n);
    i=v;
    if(v==i)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}