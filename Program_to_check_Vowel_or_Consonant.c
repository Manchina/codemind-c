#include <stdio.h>
int main()
{

    char c;
    int lowerchar, upperchar;
    scanf("%c", &c);
 
    lowerchar = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
 
    
    upperchar = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
 
    if (lowerchar || upperchar)
        printf("Vowel");
    else
        printf("Consonant");
    return 0;
}
 

