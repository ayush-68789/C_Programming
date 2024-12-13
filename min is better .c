#include <stdio.h>
#include<limits.h>
void mindiff (int arr[] , int n ) ;

int main()
{
    int test ; 
    scanf("%d",&test) ; 
    for (int i = 0 ; i < test ; i++)
    {
        int  n ; 
        scanf("%d",&n) ; 
        int arr[n] ; 
        for (int i = 0 ; i < n ; i++)
        {
            scanf("%d",&arr[i]) ; 
        }
        mindiff (arr , n ) ;
    }
}

void mindiff(int arr[] , int n )
{
    for (int i = 0 ; i < n ; i++)
    {
        for (int j = 0 ; j < n - i - 1  ; j++)
        {
            if (arr[j] > arr[j+1]) 
            {
                int temp = arr[j] ; 
                arr[j] = arr[j+1] ; 
                arr[j+1] = temp ; 
            }
        }
    }
    
    int min_diff =  INT_MAX ;
    for (int i = 0 ; i < n-1 ; i++)
    {
        int difference = arr[i+1] - arr[i] ;
        if (min_diff > difference)
        {
            min_diff = difference ; 
        }
    }
    printf("%d",min_diff) ;
}
