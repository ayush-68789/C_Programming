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
    for (int i = 0 ; i < row ; i++)
    {
        for(int j = 0 ; j < col ; j++)
        {
            scanf("%d",&arr[i][j]) ; 
        }
    } 
    for (int i = 0 ; i < row ; i++)
    {
        int sum = 0 ;
        for(int j = 0 ; j < col ; j++)
        {
            sum += arr[i][j] ; 
        }
        printf("%d ",sum) ;
    }
    return 0;
}
