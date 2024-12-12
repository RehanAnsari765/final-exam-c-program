#include <stdio.h>

void main() {
    int number, count = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0) {
        number = -number;
    }

    while (number != 0) {
        count++;
        number /= 10;
    }

    printf("The number of digits is: %d\n", count);
}
