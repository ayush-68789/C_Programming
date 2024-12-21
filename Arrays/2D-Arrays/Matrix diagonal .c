#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int row ; 
    scanf("%d",&row) ; 
    int col ;
    scanf("%d",&col) ; 
    int arr[row][col] ; 
    for (int i  = 0 ; i < row ; i++)
    {
        for (int j = 0  ; j < col ; j++)
        {
            scanf("%d",&arr[i][j]) ; 
        }
    }
    if (row != col)
    {
        printf("Not square matrix.") ; 
    }
    if (row==col)
    {
        for(int i = 0 ; i < row ; i++)
        {
            for(int j = 0 ; j < i ; j++)
            {
                printf("  ") ;
            }
            printf("%d\n",arr[i][i]); 
        }
    }
    return 0;
}
