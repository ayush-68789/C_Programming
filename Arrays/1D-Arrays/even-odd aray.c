#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void printarr(int arr[], int n );
int main() {
    int n ; 
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i<n ;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0 ; i<n ;i++)
    {
        if (arr[i]%2 == 0)
        {
            arr[i]=0;
        }
        else 
        {
            arr[i]=1;
        }
    }
    printarr(arr,n);
    return 0;
}
void printarr(int arr[], int n )
{
    for (int i = 0 ; i<n ;i++)
    {
        printf("%d ",arr[i]);
    }
}
