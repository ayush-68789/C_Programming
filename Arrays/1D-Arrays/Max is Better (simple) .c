#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
void diff(int arr[] , int n);
int main() {
    int T  ; 
    scanf("%d",&T);
    for (int i = 1 ; i <= T ; i++)
    {
        int n ; 
        scanf("%d",&n); 
        int arr[n]; 
        for (int j = 0 ; j<n ; j++)
        {
            scanf("%d",&arr[j]);
        }
        diff(arr,n); 
    }
    return 0;
}
void diff (int arr[], int n )
{
    int max = arr[0] ; 
    int min = arr[0] ;
    for (int i = 0 ; i<n ; i++)
    {
        if (max < arr[i])
        {
            max = arr[i]; 
        }
        if (min > arr[i])
        {
            min = arr[i]; 
        }
    }
    int result = max - min ; 
    printf("%d\n",result); 
}
