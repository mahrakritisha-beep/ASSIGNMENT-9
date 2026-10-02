#include <stdio.h>

void analyze(char *s, int *vowels, int *consonants,
             int *digits, int *spaces, int *special) {
    int i = 0;
    char ch;

    *vowels = *consonants = *digits = *spaces = *special = 0;

    while (*(s + i) != '\0') {
        ch = *(s + i);

        if ((ch >= 'A' && ch <= 'Z') ||
            (ch >= 'a' && ch <= 'z')) {

            if (ch == 'A' || ch == 'E' || ch == 'I' ||
                ch == 'O' || ch == 'U' || ch == 'a' ||
                ch == 'e' || ch == 'i' || ch == 'o' ||
                ch == 'u')
                (*vowels)++;
            else
                (*consonants)++;
        }
        else if (ch >= '0' && ch <= '9')
            (*digits)++;
        else if (ch == ' ')
            (*spaces)++;
        else if (ch != '\n')
            (*special)++;

        i++;
    }
}

int main() {
    char str[200];
    int vowels, consonants, digits, spaces, special;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    analyze(str, &vowels, &consonants,
            &digits, &spaces, &special);

    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);
    printf("Digits = %d\n", digits);
    printf("Spaces = %d\n", spaces);
    printf("Special characters = %d\n", special);

    return 0;
}