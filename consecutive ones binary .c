#include <stdio.h>

int main() {
    int n;
    int maxone = 0, count = 0;
    scanf("%d", &n);
    while (n > 0) 
    {
        if (n % 2 == 1) 
        {
            count++;
            if (count > maxone) 
            {
                maxone = count;
            }
        } 
        else 
        {
            count = 0;
        }
        n = n / 2;
    }
    printf("%d", maxone);

    return 0;
}
