#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n ; 
    scanf("%d",&n) ;
    int arr[n] ; 
    for (int i = 0 ; i < n ; i++)
    {
        scanf("%d",&arr[i]) ; 
    }
    
    for (int i = 0 ; i < n ; i++)
    {
        for (int j = 0 ; j < n-1 ; j++)
        {
            if(arr[j] < arr[j+1])
            {
                int temp = arr[j] ;
                arr[j] = arr[j+1] ; 
                arr[j+1] = temp ;
            }
        }
    }
    printf("%d %d",arr[0],arr[1]); 
}
