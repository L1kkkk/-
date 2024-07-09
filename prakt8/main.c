#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 14

long long factorial(int n) {
    long long result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

long long countAnagrams(char *word) {
    int n = strlen(word);
    int char_count[26] = {0};

    for (int i = 0; i < n; ++i) {
        char_count[word[i] - 'a']++;
    }

    long long denominator = factorial(n);

    for (int i = 0; i < 26; ++i) {
        if (char_count[i] > 1) {
            denominator /= factorial(char_count[i]);
        }
    }

    return denominator;
}

int main() {
    char word[MAX_LENGTH + 1];

    printf("Введіть слово (макс %d символів): ", MAX_LENGTH);
    scanf("%s", word);

    printf("Кількість анаграм: %lld\n", countAnagrams(word));

    return 0;
}
