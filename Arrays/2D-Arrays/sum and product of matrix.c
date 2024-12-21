#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int r1 ; 
    scanf("%d",&r1);
    int c1 ; 
    scanf("%d",&c1);
    int arr[r1][c1] ; 
    for (int i = 0 ; i < r1 ; i++)
    {
        for(int j = 0 ; j < c1 ; j++)
        {
            scanf("%d",&arr[i][j]); 
        }
    }

    int sum = 0 ; 
    int prod = 1 ; 
    for(int i = 0 ; i < r1 ; i++)
    {
        for (int j = 0 ; j < c1 ; j++)
        {
            sum += arr[i][j]; 
            prod *= arr[i][j] ; 
        }
    }
    printf("%d %d",sum,prod); 
}
