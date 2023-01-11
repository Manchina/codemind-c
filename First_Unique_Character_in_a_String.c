#include<stdio.h>
int main()
{
    char str[100];
    scanf("%s", str);
    int k=0;
    int i;
    for(i=0; i!=str[i]; i++){
        k++;
    }
    char arr[k];
    for(i=0; i<k; i++){
        arr[i] = str[i];
    }
    for(i=0; i<k; i++){
        int f=0;
        for(int j=0; j<k; j++){
            if(j==i){
                continue;
            }else{
                if(arr[i]==arr[j]){
                    f++;
                    break;
                }
            }
        }
        if(f==0){
            printf("%d",i);
            return 0;
        }
    }
    printf("-1");
    return 0;
}