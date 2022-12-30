#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        int flag=0;
        scanf("%d",&n);
        for(int i=1; i<=n; i++){
            if(i*i==n){
                flag++;
            }
        }
        if(flag!=0){
            printf("True
");
        }else{
            printf("False
");
        }
    }
}