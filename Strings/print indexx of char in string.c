#include <stdio.h>
#include<string.h>
int main()
{
    char str[100] ; 
    fgets(str,100,stdin) ;
    char ch ; 
    for (int i = 0 ; str[i] != '\0' ;i++)
    {
        if (ch==str[i])
        {
            printf("%d ",i) ;
        }
    }
}
