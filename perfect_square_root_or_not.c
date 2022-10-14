#include<stdio.h>
int main(){
    int n,temp,i,dope,flag=0;
    scanf("%d",&n);
    temp = n/2;
    for(i=0; i<temp; i++)
    {
        dope = i * i;
        if(dope == n){
            flag=1;
            break;
        }
    }
    if(flag == 0){
        printf("False");
    }
    else
    {
        printf("True");
    }
}