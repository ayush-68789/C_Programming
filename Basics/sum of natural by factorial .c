#include <stdio.h>
int fact (int n)
{
    int prod = 1 ; 
    for (int i = 1 ; i <= n ; i++)
    {
        prod = prod * i ; 
    }
    return prod ; 
}
int main()
{
    int n ; 
    scanf("%d",&n);
    float sum = 0 ; 
    for(int i = 1 ; i <= n ; i++)
    {
        sum = sum + (double)i/fact(i) ; 
    }
    printf("%0.6lf",sum);
    
}
