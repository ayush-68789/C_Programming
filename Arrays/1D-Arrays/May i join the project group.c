#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() 
{
    int test ; 
    scanf("%d",&test);
    for(int i  = 0 ; i < test ; i++)
    {
        int arr[2];
        for (int i = 0 ; i < 2 ; i++)
        {
            scanf("%d",&arr[i]); 
        }
        int gcd = 0 ; 
        for (int j = 2 ; j <= arr[0] && j <= arr[1] ; j++)
        {
            if (arr[0]%j==0 && arr[1]%j==0)
            {
                gcd = j ;
            }
        }
        if (gcd > 1)
        {
            printf("%d ",arr[0]/gcd);
            printf("%d",arr[1]/gcd);
        }
        else
        {
            printf("Not Possible"); 
        }
        printf("\n"); 
    }
    return 0;
}
