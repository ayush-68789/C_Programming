#include<stdio.h>
int main()
{
    int n  ; 
    scanf("%d",&n) ;
    int arr[n] ; 
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&arr[i]) ;
    }
    
    for (int i = 0 ; i < n ; i++)
    {
        for (int j = 0 ; j < n-i-1 ; j++)
        {
            if (arr[j] == 0 && arr[j+1] != 0)
            {
                int temp = arr[j+1] ; 
                arr[j+1] = arr[j] ; 
                arr[j] = temp ; 
            }
        }
    }
    
    
    for (int j = 0 ; j < n ; j++)
    {
        printf("%d ",arr[j]) ;
    }
}
