#include<stdio.h>
#include<string.h>
int main()
{
    int test ; 
    scanf("%d\n",&test) ; 
    for (int i = 0 ; i < test ; i++)
    {
        char str[100];
        fgets(str,100,stdin) ; 
        if(str[strlen(str)-1] == '\n') ; 
        {
            str[strlen(str)-1] = '\0' ; 
        }
        
        char sub[100] ; 
        fgets(sub,100,stdin) ; 
        if(sub[strlen(sub)-1] == '\n')
        {
            sub[strlen(sub)-1] = '\0' ;
        }
        
        if (strstr(str, sub) != NULL)
        {
            printf("1\n") ; 
        }
        else
        {
            printf("0\n");
        }
    }
}
