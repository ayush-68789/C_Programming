#include <stdio.h>
#include<string.h>
int main()
{
    char str[100] ; 
    fgets(str,100,stdin) ;
    char ch ; 
    scanf("%c",&ch) ;
    if (str[strlen(str)-1] == '\n')
    {
        str[strlen(str)-1] == '\0' ; 
    }
    
    for (int i = 0 ; str[i] != '\0' ;i++)
    {
        if (ch==str[i])
        {
            printf("%d ",i) ;
        }
    }
}
