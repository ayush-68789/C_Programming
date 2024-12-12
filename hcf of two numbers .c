#include <stdio.h>
int main()
{
    int n1 , n2  ;
    scanf("%d",&n1) ;
    scanf("%d",&n2) ;
    while (n2 != 0)
    {
        n1 = n1 % n2 ; 
        int temp = n1;
        n1 = n2 ; 
        n2 = temp ;
    }
    printf("%d",n1) ;
}
