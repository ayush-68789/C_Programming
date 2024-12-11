#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int r1 , c1 ; 
    scanf("%d", &r1); 
    scanf("%d\n", &c1) ;
    int arr[r1][c1] ; 
    for (int i = 0 ; i < r1 ; i++ )
    {
        for (int j = 0 ; j < c1 ; j++ )
        {
            scanf("%d", &arr[i][j]) ; 
        }
    } 
    for (int k = 0 ; k < r1 ; k++ )
    {
        for (int l = 0 ; l < c1 ; l++ )
        {
            printf("%d ", arr[k][l]) ; 
        }
        printf("\n") ; 
    }
    return 0;
}
