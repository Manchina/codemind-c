#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main()
{
    char a[100];
    int t,i;
    for(i=0;i<=10;i++){
        scanf("%s",&a[i]);
    }
    t=strlen(a);
    if(t==10&&a[0]!='0')
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
    return 0;
}
//Phone number validation