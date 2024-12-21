#include <stdio.h>
void digitSum(int n) 
{
    while (n >= 10) 
    {
        int sum = 0;
        // Sum all digits of the current number
        while (n > 0) 
        {
            sum += n % 10;  // Add last digit to sum
            n /= 10;         // Remove the last digit
        }
        n = sum;  // Update n to the sum of digits
    }
    printf("%d",n);  // Return the single digit sum
}

int main() 
{
    int N;
    scanf("%d", &N);     
    digitSum(N); 
}
