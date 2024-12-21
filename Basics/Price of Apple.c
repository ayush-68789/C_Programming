#include <stdio.h>
int main()
{
    int test ; 
    scanf("%d",&test) ; 
    for (int i = 0 ; i < test ; i++)
    {
        int a , b , c ;
        scanf("%d",&a); 
        scanf("%d",&b);
        scanf("%d",&c);
        int price_of_c  = (b*c)/a ; 
        printf("%d",price_of_c) ;
    }
}
