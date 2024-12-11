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
        int len = strlen(str) ; 
        
        char sub[100] ; 
        strcpy(sub,str) ; 
        
        for(int i= 0 ;  i < len  ;i++)
        {
            for (int j = 0 ; j < len-1 ; j++)
            {
                if (sub[j] > sub[j+1])
                {
                    int temp = sub[j];
                    sub[j] =sub[j+1] ; 
                    sub[j+1] = temp ; 
                }
            }
        }
        if (strcmp(str,sub) > 0 )
        {
            printf("yes"); 
        }
        else{
            printf("no") ;
        }
    }
}
