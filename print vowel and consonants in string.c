#include <stdio.h>
#include <string.h>
#include <ctype.h> // For checking if a character is a letter

int main() {
    char str[10001];  // To store the input string, max length 10000
    char vowels[10001];  // To store vowels
    char consonants[10001];  // To store consonants
    int v_idx = 0, c_idx = 0;  // Indexes to track position in vowels and consonants

    // Initialize vowels and consonants arrays
    vowels[0] = '\0';
    consonants[0] = '\0';

    // Read the string
    fgets(str, sizeof(str), stdin);

    // Iterate through the string
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        // Check if the character is a letter
        if (isalpha(ch)) {
            ch = tolower(ch);  // Convert to lowercase for easier checking

            // If it's a vowel, add it to vowels array
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels[v_idx++] = str[i];  // Append vowel to vowels array
                vowels[v_idx] = '\0';  // Null-terminate the string
            } 
            // If it's a consonant, add it to consonants array
            else {
                consonants[c_idx++] = str[i];  // Append consonant to consonants array
                consonants[c_idx] = '\0';  // Null-terminate the string
            }
        }
    }
    printf("%s\n", vowels);
    printf("%s\n", consonants);

    return 0;
}
