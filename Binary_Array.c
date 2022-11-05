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
        if(arr[i] > 1){
            flag=1;
        }
    }
    
    if(flag==0){
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}