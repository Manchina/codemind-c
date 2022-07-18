#include<stdio.h>
int main(){
   int n,rem,rnum,temp,n1,n2;
   scanf("%d",&n1);
   scanf("%d",&n2);
   for(n=n1;n<=n2;n++){
      temp=n;
      rnum=0;
      while(temp)
	  {
         rem=temp%10;
         temp=temp/10;
         rnum=rnum*10+rem;
      }
      if(n==rnum)
         printf("%d ",n);
   }
   return 0;
}