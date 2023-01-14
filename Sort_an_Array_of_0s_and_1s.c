#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int c = 0;
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
        if(arr[i]==0){
            c++;
        }
    }
    for(int i=0; i<c; i++){
        arr[i] = 0;
    }
    for(int i=c; i<n; i++) {
        arr[i] = 1;
    }
    for(int i=0; i<n; i++) {
        printf("%d ",arr[i]);
    }
    return 0;
}