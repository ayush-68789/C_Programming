#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n ;
    scanf("%d",&n); 
    int three =0 , nine = 0 ; 
    while(n>0)   
    {
        int digit  = n % 10 ; 
        if(digit == 3 )
        {
            three= 1 ; 
        }
        if(digit == 9)
        {
            nine = 1 ; 
        }
        n /= 10 ; 
    }
    
    if(three && nine)
    {
        printf("Yes"); 
    }
    else
    {
        printf("No");
    }
}
