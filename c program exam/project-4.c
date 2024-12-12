#include <stdio.h>

void checkVowel(char ch) {
    ch = tolower(ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("%c is a Vowel.\n", ch);
    } else {
        printf("%c is a Consonant.\n", ch);
    }
}

int main(void) {
    char ch;

    printf("Enter an Alphabet: ");
    scanf(" %c", &ch);

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        checkVowel(ch);
    } else {
        printf("Invalid input. Please enter an Alphabet.\n");
    }

    return 0;
}
