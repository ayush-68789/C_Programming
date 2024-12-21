#include <stdio.h>
void maxmin(int arr[] , int n );
int main()
{
    int test  ;
    scanf("%d",&test) ; 
    for (int i = 1 ; i <= test ; i++)
    {
        int n ;
        scanf("%d",&n) ;
        int arr[n] ;
        for (int i = 0 ; i < n ; i++) 
        {
            scanf("%d",&arr[i]) ;
        }
        maxmin(arr,n) ;
    }
}

void maxmin (int arr[] , int n )
{
    int max = arr[0] ;
    int min = arr[0] ; 
    for (int i = 0 ; i < n ; i++)
    {
        if(max < arr[i])
        {
            max = arr[i] ; 
        }
        else if (min > arr[i])
        {
            min = arr[i] ; 
        }
    }
    printf("max = %d \nmin = %d",max,min) ; 
}
