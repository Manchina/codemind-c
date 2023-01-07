#include<stdio.h>
int main()
{
    char word[20];
    int len = 0;
    scanf("%s", word);
    for(int i=0; word[i]!=NULL; i++){
        len++;
    }
    int c = 0;
    int v = 0;
    for(int i=0; i<len; i++)
    {
        
        if(word[i]=='a' || word[i]=='e' || word[i]=='i' || word[i]=='o'|| word[i]=='u'){
            if(c==0){
            printf("V");
            c = 1;
            v = 0;
            }
        }else{
            if(v==0){
            printf("C");
            v = 1;
            c = 0;
            }
        }
    }
    return 0;
}