#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int b, n, i, j, c;
    scanf("%d", &b);

    while (b--) {
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);

        for (i = 0; i < n; i++)
            for (j = 0; j < n - 1; j++)
                if (a[j] > a[j + 1]) {
                    c = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = c;
                }

        int m = a[n - 1];
        for (i = 0; i < n - 1; i++) {
            int d = a[i + 1] - a[i];
            if (d < m)
                m = d;
        }

        printf("%d\n", m);
    }
}

    
