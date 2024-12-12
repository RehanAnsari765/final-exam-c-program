#include <stdio.h>

void main() {
    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    printf("Natural numbers from %d to 1:\n", n);

    for (int i = n; i >= 1; i--) {
        printf("%d\n", i);
    }
}
