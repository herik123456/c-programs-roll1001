#include <stdio.h>
#include <ctype.h>

int isConsonant(char ch) {
    ch = tolower(ch);
    return (ch >= 'a' && ch <= 'z') && !(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() {
    char str[1000];
    int i, consonantCount = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read input including spaces

    for (i = 0; str[i] != '\0'; i++) {
        if (isConsonant(str[i])) {
            consonantCount++;
        }
    }

    printf("Number of consonants: %d\n", consonantCount);

    return 0;
}

