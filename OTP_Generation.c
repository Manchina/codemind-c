#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char str[10];
    scanf("%s", str);
    int val = atoi(str);
    int t = val;
    int l=0;
    for(int i=0; str[i]!=NULL; i++){
        l++;
    }
    int arr[l];
    for(int i=l-1; i>=0; i--){
        arr[i] = t % 10;
        t /= 10;
    }
    for(int i=0; i<l; i++){
        if(arr[i]%2!=0){
            printf("%d",arr[i]*arr[i]);
        }
    }
    return 0;
}