#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum=0,r,num,length=0,i,number,reverse=0,f;
    scanf("%d",&n);
    f=n;
    num=n;
    while(num>0)
    {

        length=length+1;
        num=num/10;
    }
    number=n;
    while(number!=0)
    {
        reverse=reverse*10;
        reverse=reverse+number%10;
        number=number/10;
    }
    while(n!=0)
    {
        r=n%10;
        sum=sum+pow(r,length);
        length--;
        n=n/10;


    }
if(sum==f)
    printf("True");
else
    printf("False");
return 0;
}
