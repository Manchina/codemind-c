#include<stdio.h>
int main()
{
    int n,flag=0,f,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&f);
    for(i=0;i<n;i++)
    {
        if(f==a[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}