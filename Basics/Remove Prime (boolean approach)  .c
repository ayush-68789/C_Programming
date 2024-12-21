#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n ,num ;
    scanf("%d",&n) ; 
    for (int i = 0 ; i < n ; i++)
    {
        scanf("%d",&num);
        int p = 1 ; 
        if (num <= 1)
        {
            p = 0 ;
        }
        for(int j = 2 ; j*j <= num ; j++)
        {
            if(num % j == 0 )
            {
                p = 0 ; 
                break ; 
            }
        }
        if(!p)
        {
            printf("%d ",num);
        }
    }
}
