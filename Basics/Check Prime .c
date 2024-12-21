#include<stdio.h>
int main()
{
    int n ; 
    scanf("%d",&n) ; 
    int count = 0 ; 
    for (int j = 1 ; j <= n ; j++)
    {
        if ( n % j == 0)
        {
            count++ ;
        }
    }
    if (count==2)
    {
        printf("Its PRime") ;
    }
    else
    {
        printf("NOT PRIME !! ") ;
    }
}
