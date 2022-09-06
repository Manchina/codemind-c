#include<stdio.h>
int main()
{
    int n,tf;
    scanf("%d",&n);
    int arr[n],i,c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&tf);
    for(i=0;i<n;i++)
    {
       if(tf==arr[i])
       c++;
    }
    printf("%d",c);
    return 0;
}