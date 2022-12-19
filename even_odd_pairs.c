#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a],i;
    for (i=0; i<a; i++)
    {
        scanf("%d",&arr[i]);
    }
    int ec=0,oc=0;
    for (i=0; i<a; i++)
    {
        if (arr[i]%2==0)
        {
            ec++;
        }
        else
        {
            oc++;
        }
    }
    int earr[ec],oarr[oc];
    int j=0,k=0;
    for (i=0; i<a; i++)
    {
        if (arr[i]%2==0)
        {
            earr[j]=arr[i];
            j++;
        }
        else
        {
            oarr[k]=arr[i];
            k++;
        }
    }
    for (i=0; i<a; i++)
    {
        if (i<ec)
        {
            printf("%d ",earr[i]);
        }
        if (i<oc)
        {
            printf("%d ",oarr[i]);
        }
    }
    if (a%2!=0)
    {
        printf("0");
    }
    return 0;
}
