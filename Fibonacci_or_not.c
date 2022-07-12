#include<stdio.h>
int main()
{
    int m,arr[100],i;
    scanf("%d",&m);
    arr[0];
    arr[1]=1;
    for(i=2;i<100;i++)
    {
        arr[i]=arr[i-2]+arr[i-1];
    }
    for(i=0;i<100;i++)
    {
        if(m==arr[i])
        {
            printf("True");
            break;
        }
        else if(m<arr[i])
        {
            printf("False");
            break;
        }
    }
    return 0;
}