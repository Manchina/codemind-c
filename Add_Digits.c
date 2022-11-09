#include<stdio.h>
int main()
{
    int n,rem;
    scanf("%d",&n);
    begin:
     int s=0;
     while(n!=0){
         rem = n%10;
         s+=rem;
         n/=10;
     }
     n=s;
     if(s<10){
         printf("%d",s);
     }else{
         goto begin;
          
     }
}