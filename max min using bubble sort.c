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
    for (int i = 0 ; i < n ; i++)
    {
        for (int j = 0 ; j < n - i - 1 ; j++)
        {
            if ( arr[j] < arr[j+1] )
            {
                int temp = arr[j] ; 
                arr[j] = arr[j+1] ;
                arr[j+1] = temp ;
            }
        }
    }
    int max = arr[0] ; 
    int min = arr[n-1] ;
    printf("max = %d \nmin = %d",max,min) ; 
}
