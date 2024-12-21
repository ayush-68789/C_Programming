#include<stdio.h>
int main()
{
    int n ; 
    scanf("%d",&n) ;
    for(int i = 2 ; i <= n ; i++)
    {
        int primehai = 1 ;
        for(int j = 2 ; j < i ; j++)
        {
            if ( i %  j == 0 )
            {
                primehai = 0 ;
                break ; 
            }
        }
        if(primehai)
        {
            printf("%d ",i) ; 
        }
    }
}
