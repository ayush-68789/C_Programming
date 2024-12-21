#include<stdio.h>
int main()
{
    int dist , num , range ;
    scanf("%d %d %d",&dist,&num,&range) ;
    if (num * range >= dist)
    {
        printf("yes") ;
    }
    else
    {
        printf("no") ;
    }
}
