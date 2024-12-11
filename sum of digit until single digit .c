#include <stdio.h>
int digitalRoot(int num) {
    int sum;
    while (num >= 10) {
        sum = 0;
        // Sum the digits of the current number
        while (num != 0) {
            sum += num % 10;  // Add the last digit
            num /= 10;         // Remove the last digit
        }
        num = sum;  // Update num to be the sum of its digits
    }
    return num;  // Return the single-digit result
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("The digital root of %d is: %d\n", number, digitalRoot(number));

    return 0;
}
