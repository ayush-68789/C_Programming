#include<stdio.h>
#include<string.h>
int main()
{
    char str[100]; 
    fgets(str,100,stdin); 
    char word ; 
    scanf("%c",&word) ;
    int count = 0 ; 
    for (int i = 0 ; str[i] != '\0' ; i++)
    {
        if(word == str[i])
        {
            count++ ; 
        }
    }
    printf("%d",count) ;
}
