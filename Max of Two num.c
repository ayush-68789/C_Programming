#include <stdio.h>
int main()
{
    int n1 , n2 ;
    scanf("%d",&n1) ; 
    scanf("%d",&n2) ;
    if ( n1 > n2 )
    {
        printf("%d is largest",n1) ;
    }
    else if ( n1 < n2 )
    {
        printf("%d is largest",n2) ;
    }
    else
    {
        printf("equal num") ; 
    }
}
