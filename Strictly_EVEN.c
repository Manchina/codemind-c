#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,flag=0;

    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    for(i=0; i<n; i++){
     if(arr[i]%2==0){
        if(i%2!=0){
            flag = 1;
            break;
        }
     }
    }
    if(flag==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}

