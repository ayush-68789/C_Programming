#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void maxmin (int arr[], int n )
{
    int max  = arr[0]; 
    int min = arr[0] ; 
    for (int i = 0 ; i < n ; i++)
    {
        if (max < arr[i] )
        {
            max = arr[i] ; 
        }
        if (min > arr[i])
        {
            min = arr[i] ; 
        }
    }
    printf("%d\n%d",min,max);
}
int main()
{
    int size ; 
    scanf("%d",&size) ; 
    int arr[size] ; 
    for(int i = 0 ; i< size ; i++)
    {
        scanf("%d",&arr[i]); 
    }
    maxmin(arr,size ); 
    return 0;
}
