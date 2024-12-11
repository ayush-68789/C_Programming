#include<stdio.h>
int hcf (int a  ,int  b ) 
{
    while(b!=0)
    {
        a = a% b ; 
        int temp = a ;
        a = b ; 
        b = temp ; 
    }
    return a ; 
}
int main()
{
    int a , b ;
    scanf("%d",&a) ; 
    scanf("%d",&b) ; 
    printf("%d",hcf(a,b));
}
