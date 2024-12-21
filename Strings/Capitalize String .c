#include<stdio.h>
#include<string.h>
int main()
{
    char str[100]; 
    fgets(str,100,stdin);  
    for (int i = 0 ; str[i] != '\0' ; i++)
    {
        if (i == 0 || str[i-1] == ' ')
        {
            if(str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] = str[i] + 'A' - 'a' ; 
            }    
        }
        else
        {
            if(str[i] >= 'A' && str[i] <= 'Z')
            {
                str[i] = str[i] - 'A' + 'a' ; 
            }    
        }
    }
    printf("%s",str) ;
}
