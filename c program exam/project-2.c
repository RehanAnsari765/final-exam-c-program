#include <stdio.h>

void main() {
    int rows = 5;
    char startChar = 'A';

    for (int i = 1; i <= rows; i++) {

        for (int j = 1; j <= i; j++) {
            printf("%c", startChar);
            startChar++;
        }

        printf("\n");
    }
}