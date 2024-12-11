#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int  n ;
    scanf("%d",&n) ; 
    int arr[n] ; 
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&arr[i]) ; 
    }
    int route = arr[0] ; 
    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i] > route) 
        {
            route = arr[i] ; 
        }
    }
    int count  =0 ; 
    for(int i = 0 ; i < n ; i++)
    {
        if (arr[i] == route)
        {
            count++ ; 
        }
    }
    printf("%d",count) ; 
}
