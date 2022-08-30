#include<stdio.h>
int main()
{
    int i,l,n,w,h;
    scanf("%d",&l);
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%d %d",&w,&h);
    if(w<l)
    printf("UPLOAD ANOTHER
");
    else if(h<l)
    printf("UPLOAD ANOTHER
");
    else if(w==h)
    printf("ACCEPTED
");
    else
    printf("CROP IT
");
    }
    return 0;
}