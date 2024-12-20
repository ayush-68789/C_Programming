#include <stdio.h>
int main()
{
    int arr[3][3] = {1,0,0,0,0,1,0,1,0} ; 
    int count =0 ;
    for (int i = 0 ; i < 3 ; i++)
    {
        int sum = 0 ; 
        for (int j = 0 ; j < 3 ; j++)
        {
            if (arr[i][j] == 1)
            {
                sum++ ; 
            }
        }
        if(count < sum )
        {
            count = sum ; 
        }
    }
    printf("%d",count) ; 
}
