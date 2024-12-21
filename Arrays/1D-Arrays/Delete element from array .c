#include <stdio.h>
int main()
{
    int size ; 
    scanf("%d",&size) ; 
    int arr[size] ; 
    for (int i = 0 ; i < size ; i++)
    {
        scanf("%d",&arr[i]) ;
    }
    int num ; 
    scanf("%d",&num) ; 
    
    for(int i = 0 ; i < size ;i++)
    {
        if (arr[i] == num)
        {
            for (int j = i ; j < size - 1 ; j++)
            {
                arr[j] = arr[j+1] ; 
            }
            size-- ;
                    
            for(int k = 0 ; k < size ; k++)
            {
                printf("%d ",arr[k]) ;
            }
            return 0 ;
        }
    }
    printf("Not found.");
}
