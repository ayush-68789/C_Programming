#include<stdio.h>
void maxLength (int arr[] , int N ); 
int main()
{
    int T ;
    scanf("%d",&T) ; 
    for (int i = 0 ; i<T ; i++)
    {
        int N ; 
        scanf("%d",&N);
        int arr[N];
        for(int i = 0 ; i < N ; i++)
        {
            scanf("%d",&arr[i]); 
        }
        maxLength(arr,N);
    }
}
    
void maxLength (int arr[], int N )
{
    for(int i = 0 ; i < N-1 ; i++)
    {
        for(int j = 0 ; j < N-i-1 ; j++)
        {
            if (arr[j] < arr[j+1])
            {
                int temp = arr[j] ; 
                arr[j] = arr[j+1] ; 
                arr[j+1] = temp ; 
            }
        }
    }
    int max1 = arr[0];
    int max2 = arr[1];
    int result = max1*max2 ; 
    printf("%d\n",result) ; 
}
