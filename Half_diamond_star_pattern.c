#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n<3 || n>100){
        printf("The pattern is not possible");
        return 0;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            printf("*");
        }
        printf("
");
    }
    int t = n - 1;
    for(int i=0; i<n-1; i++){
        for(int j=0; j<t; j++){
            printf("*");
        }
        printf("
");
        t--;
    }
    return 0;
}
