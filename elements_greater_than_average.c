#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],sum=0,avg,count=0,i;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    avg=sum/n;
    for(i=0;i<n;i++){
        if(arr[i]>=avg){
            count++;
        }
    }
    printf("%d",count);
}