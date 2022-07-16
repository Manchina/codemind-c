#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,m,p,i;
    scanf("%d%d%d",&x,&y,&m);
    p=pow(x,y);
    i=p%m;
    printf("%d",i);
    return 0;
    
}