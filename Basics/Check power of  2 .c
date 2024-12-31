#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    while (n > 1) 
    {
        if (n % 2 != 0) 
        {
            printf("0\n");
            return 0;
        }
        n = n / 2;
    }

    printf("1\n");

    return 0;
}
