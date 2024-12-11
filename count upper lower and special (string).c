#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int lower = 0 , upper = 0 , special = 0 ; 
    char str[100] ; 
    fgets(str,100,stdin) ; 
    if (str[strlen(str)-1] == '\n')
    {
        str[strlen(str)-1] = '\0' ; 
    }
    for(int  i = 0 ; str[i] != '\0' ; i++)
    {
        if(isupper(str[i])) 
        {
            upper++ ; 
        }
        if (islower(str[i])) 
        {
            lower++ ; 
        }
        if(!isalnum(str[i]))
        {
            special++ ; 
        }
    }
    printf("%d\n%d\n%d",upper,lower,special) ; 
}
