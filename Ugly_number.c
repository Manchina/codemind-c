#include<stdio.h>
int main()
{
    int x=0,n;
    scanf("%d",&n);
    while(n!=1){
        if(n % 5 == 0){
            n /= 5;
        }
        else if(n % 3 == 0){
            n /= 3;
        }
        else if(n % 2 == 0){
            n /= 2;
        }
        else{
            printf("Not Ugly Number");
            x=1;
            break;
        }
    }
    if(x == 0){
        printf("Ugly Number");
    }
}